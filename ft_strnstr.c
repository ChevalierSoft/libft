/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:40:30 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 19:55:53 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static int		ft_strchr_2(const char *s, char c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		s++;
	}
	return (-1);
}

char			*ft_strnstr(const char *src, const char *needle, size_t len)
{
	long			i;
	size_t			ln;
	//long			stock;

	len++;
	len--;
	if (!*needle)
		return ((char *)src);
	else if (ft_strchr_2(src, needle[0]) < 0)
		return (0);
	ln = ft_strlen(needle);
	i = -1;
	while (src[++i] && len--)
	{
		//stock = ft_strchr_2(src + i, (char)needle[0]);
		if (src[i] == 0)
			return ((char *)src + i);
		i++;
		if (!ft_strncmp((char *)(src + i), (char *)needle, ln))
			return ((char *)src + i);
	}
	return (0);
}
