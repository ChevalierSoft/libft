/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 12:24:00 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 18:09:28 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <ctype.h>

int	ft_isalpha(char c)
{
	unsigned char d = (unsigned char)c;
	if ((d >= 97 && d <= 122) || (d >= 65 && d <= 90) )
	/*	|| (c >= (unsigned char)-191 && c <= (unsigned char)-166) || (c >= (char)-159 && c <= (char)-134)
		)*/
		return (1);
	return (0);
}
/*
int main(void)
{
	for (int i = -255; i < 255; i++)
	{
		//printf("%c : %d | %d\n", i, ft_isalpha(i), isalpha(i));
		if (ft_isalpha(i) != isalpha(i))
		{
			printf("%d | %c : %d | %d\n", i, i, ft_isalpha(i), isalpha(i));
		}
	}
	return (0);
}
*/
