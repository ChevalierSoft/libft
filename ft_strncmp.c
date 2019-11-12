/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 18:53:37 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:37:17 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int res;

	if (!n)
		return (0);
	while ((*s1) && (*s2) && (*s1 == *s2) && --n)
	{
		s1++;
		s2++;
	}
	res = (unsigned char)*s1 - (unsigned char)*s2;
	return (res);
}
