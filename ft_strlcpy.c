/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 12:50:36 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:44:32 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t			ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	i = 0;
	if (len + 1 < size)
	{
		while (i < len + 1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else if (size)
	{
		while (i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[size - 1] = 0;
	}
	return (len);
}
