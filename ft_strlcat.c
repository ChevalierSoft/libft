/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:55:16 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:49:42 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;

	slen = ft_strlen(src);
	if (!size)
		return (slen);
	dlen = ft_strlen(dest);
	/*while (*dest)
	{
		size--;
		dest++;
	}*/
	size -= dlen;
	dest += dlen;

	while (size - 1)
	{
		*dest++ = *src++;
		size--;
	}
	*dest = 0;
	return (dlen + slen);
}
