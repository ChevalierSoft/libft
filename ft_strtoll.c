/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoll.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <dait-atm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:11:18 by dait-atm          #+#    #+#             */
/*   Updated: 2021/01/24 11:34:31 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <errno.h>
#include <limits.h>

typedef struct s_strtoll_content
{
	int					any;
	unsigned long long	cutoff;
	int					cutlim;
}				t_strtoll_content;


long long	ft_strtoll(const char *nptr, char **endptr, int base)
{
	char				*s;
	int					c;
	int					neg;
	unsigned long long	acc;
	t_strtoll_content	content;

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
		content.cutoff = -(unsigned long long)LLONG_MIN;
	else
		content.cutoff = (unsigned long long)LLONG_MAX;

	// get the last digit
	content.cutlim = content.cutoff % (unsigned long long)base;
	// max length of the number depending on base
	content.cutoff /= (unsigned long long)base;

	acc = 0;
	content.any = 0;
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
		if (content.any < 0 || acc > content.cutoff || (acc == content.cutoff && c > content.cutlim))
			content.any = -1;
		else
		{
			content.any = 1;
			acc *= base;
			acc += c;
		}
		c = *s++;
	}
	// overflow or underflow
	if (content.any < 0)
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
		if (content.any)
			*endptr = s - 1;
		else
			*endptr = (char *)nptr;
	}

	return (acc);
}
