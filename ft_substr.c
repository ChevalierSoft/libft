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
	size_t	i;

	if (!s)
		return (0);
	if (!(p = malloc(sizeof(char) * len + 1)))
		return (0);
	i = 0;

	if (start < ft_strlen(s))
	{
		p[len] = 0;
		while (len-- && s[i])
		{
			p[i] = s[i + start];
			i++;
		}
	}
	return (p);
}

