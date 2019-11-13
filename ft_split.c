/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:54:33 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 15:53:41 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static size_t		ft_find_string_number(const char *s, char c, size_t *nbm)
{
	size_t	i;

	*nbm = 1;
	i = 0;
	while (s[i] == c)
		i++;
	if (!s[i])
		*nbm = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			(*nbm)++;
			while (s[i] == c)
				i++;
			if (!s[i])
			{
				(*nbm)--;
				break ;
			}
		}
		i++;
	}
	return (*nbm);
}

static size_t		ft_strlen2(char **s, char c)
{
	size_t	i;
	char	*p;

	i = 0;
	while (**s == c)
		(*s)++;
	p = *s;
	while (*p != c && *p)
	{
		p++;
		i++;
	}
	return (i);
}

char				**ft_split(char const *s, char c)
{
	char	**lt;
	size_t	nbm;
	size_t	belica;
	size_t	w;
	char	*re;

	belica = 0;
	re = (char *)s;
	if (!s)
		return (0);
	if (!(nbm = ft_find_string_number(s, c, &nbm)))
		return (0);
	if (!(lt = malloc(sizeof(char *) * nbm + 1)))
		return (0);
	while (belica < nbm)
	{
		w = ft_strlen2(&re, c) + 1;
		if (!(lt[belica] = malloc(sizeof(char) * w)))
			return (0);
		while (w + 1)
		{
			lt[belica][w] = re[w];
			w--;
		}
		w = ft_strlen2(&re, c);
		re += w;
		lt[belica][w] = 0;
		belica++;
	}
	lt[belica] = 0;
	return (lt);
}
