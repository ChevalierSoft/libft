/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:54:33 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 16:40:41 by dait-atm         ###   ########.fr       */
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

static int			ptit_test_de_mort(char *s, char c, size_t *nbm, char ***lt)
{
	if (!s)
		return (0);
	if (!(ft_find_string_number(s, c, nbm)))
		return (0);
	if (!((*lt) = malloc(sizeof(char *) * (*nbm + 1))))
		return (0);
	return (1);
}

char				**ft_split(char const *s, char c)
{
	char	**lt;
	char	*re;
	size_t	jpp[3];

	if (!(ptit_test_de_mort((char *)s, c, &jpp[0], &lt)))
		return (0);
	jpp[1] = 0;
	re = (char *)s;
	while (jpp[1] < jpp[0])
	{
		jpp[2] = ft_strlen2(&re, c) + 1;
		if (!(lt[jpp[1]] = malloc(sizeof(char) * jpp[2])))
			return (0);
		while (jpp[2] + 1)
		{
			lt[jpp[1]][jpp[2]] = re[jpp[2]];
			jpp[2]--;
		}
		jpp[2] = ft_strlen2(&re, c);
		re += jpp[2];
		lt[jpp[1]][jpp[2]] = 0;
		jpp[1]++;
	}
	lt[jpp[1]] = 0;
	return (lt);
}
