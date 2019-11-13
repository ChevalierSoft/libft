/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:57:12 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 12:08:38 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_atoi(const char *str)
{
	//return (atoi(str));
	int				neg;
	long long		res;
	//printf("str : [%s]\n", str);
	neg = 1;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	res = 0;
	while (ft_isdigit(*str))
	{
		/*if ((res = (res * 10) + (*str++ - '0') > 2147483647)
			|| (res = (res * 10) + (*str++ - '0') < 2147483647))
			return ();*/
		res = ((res * 10) + (*str++ - '0'));
	}
	return ((int)(neg * res));
}
/*
int main(void)
{
	
	printf("%d\n",my_atoi("-9999999999999999999"));
	printf("%d\n",atoi(   "-9999999999999999999"));
	
	printf("\nsp %d\n",atoi(   "   -2147483649"));
	return (0);
}
*/
