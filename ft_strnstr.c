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

static int		ft_strchr_2(const char *s, int c)
{
	unsigned int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (i);
		s++;
	}
	return (-1);
}

char			*ft_strnstr(const char *src, const char *needle, size_t len)
{
	long			i;
	unsigned int	ln;
	long			stock;

	len++;
	len--;
	if (!*needle)
		return ((char *)src);
	else if (ft_strchr_2(src, (int)needle[0]) < 0)
		return (0);
	ln = (long)ft_strlen(needle);
	i = -1;
	while (src[++i])
	{
		stock = ft_strchr_2(src + i, (int)needle[0]);
		if (stock < 0)
			return (0);
		i += stock;
		if (!ft_strncmp((char *)(src + i), (char *)needle, ln))
			return ((char *)src + i);
	}
	return (0);
}
