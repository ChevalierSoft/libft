/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:54:33 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 15:48:19 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

static size_t	ft_find_string_number(const char *s, char c, size_t *nbm)
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

const size_t		decoupe(char *s, char c)
{
	char *l;

	while (*s != c)
	{
		s++;
	}
	return (666);
}

char			**ft_split(char const *s, char c)
{
	char	**lt;
	size_t	nbm;
	size_t	belica;
	size_t	w;

	if (!s)
		return (0);

	nbm = ft_find_string_number(s, c, &nbm);
//	printf("nbm = %zu\n", nbm);
	/*
	w = 0;
	belica = 0;
	lt = malloc(sizeof(char *) * nbm + 1);
	while (belica < nbm)
	{
		lt[belica] = decoupe(s + w);
		belica++;

	}
	lt[belica] = 0;
	*/
	return (lt);
}

int				main(int argc, char **argv)
{
	char	**lt_belica;

	lt_belica = ft_split(argv[1], ' ');
	//for (int i = 0; i < argc; i++)
	//	free(lt_belica[i]);
}
