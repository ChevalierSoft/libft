/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <dait-atm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:11:18 by dait-atm          #+#    #+#             */
/*   Updated: 2021/01/24 09:20:03 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

long long	ft_strtoll(const char *nptr, char **endptr, int base)
{
	char				*s;
	int					c;
	int					neg;
	int					any;
	unsigned long long	acc;
	unsigned long long	cutoff;
	int					cutlim;

	neg = 0;
	s = (char *)nptr;
	c = (int)*s++;

	// espaces
	while (c == ' ')
		c = *s++;
	
	// signe
	if (c == '-')
	{
		neg = 1;
		c = *s++;
	}
	else if (c == '+')
		c = *s++;
	// 0x
	if ((base == 0 || base == 16)
		&& c == '0' && (*s == 'x' || *s == 'X'))
	{
		c = ++*s++;
		base = 16;
	}

	// number begins with 0
	if  (base == 0)
	{
		if (c == '0')
			base = 8;
		else
			base = 10;
	}

	// set the maxmimum value to not cross
	if (neg)
		cutoff = -(unsigned long long)LONG_MIN;
	else
		cutoff = (unsigned long long)LONG_MIN;

	// get the last digit
	cutlim = cutoff % (unsigned long long)base;
	// max length of the number depending on base
	cutoff /= (unsigned long long)base;

	acc = 0;
	any = 0;
	while (1)
	{
		if (ft_isdigit(c))
			c -= '0';
		else if (ft_isalpha(c))
		{
			if (ft_isupper(c))
				c -= 'A' - 10;
			else
				c -= 'a' - 10;
		}
		else
			break ;
		// if the letter is not in the base
		if (c >= base)
			break ;
		// number is too big	
		if (any < 0 || acc > cutoff || (acc == cutoff && c > cutlim))
			any = -1;
		else
		{
			any = 1;
			acc *= base;
			acc += c;
		}
		c = *s++;
	}
	// overflow or underflow
	if (any < 0)
	{
		if (neg)
			acc = LLONG_MIN;
		else
			acc = LLONG_MAX;
		errno = ERANGE;
	}
	else if (neg)
		acc = -acc;
	// store bad char
	if (endptr != NULL)
	{
		if (any)
			*endptr = s - 1;
		else
			*endptr = nptr;
	}

	return (acc);
}
