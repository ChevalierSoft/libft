/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:06:54 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:25:32 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;

	if (!len || !s)
		return (0);
	slen = ft_strlen(s + start);
	if (len > slen)
		len = slen;
	if (!(p = malloc(sizeof(char) * len + 1)))
		return (0);
	ft_strncpy(p, s + start, len);
	p[len] = 0;
	return (p);
}
