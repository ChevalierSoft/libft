/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 22:57:12 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 17:29:20 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_atoi(const char *str)
{
	//return (atoi(str));
	int		neg;
	long	res;
	//printf("str : [%s]\n", str);
	if (*str == '-')
	{
		neg = -1;
		str++;
	}
	else
		neg = 1;
	res = 0;
	
	while (ft_isdigit(*str))
	{
		/*if ((res = (res * 10) + (*str++ - '0') > 2147483647)
			|| (res = (res * 10) + (*str++ - '0') < 2147483647))
			return ();*/
		res = ((res * 10) + (*str++ - '0'));
	}
	return ((neg * res));
}


int main(void)
{
	
	printf("%d\n",ft_atoi("-99999999999999999999999999"));
	printf("%d\n",atoi(   "-99999999999999999999999999"));
	
	return (0);
}

