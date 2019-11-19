/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:54:33 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/18 15:38:06 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

int		ft_size_w(char *str, char charset, int i)
{
	int j;

	j = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset))
			return (j);
		j++;
		i++;
	}
	return (j);
}

int		ft_count_words(char *str, char charset)
{
	int i;
	int j;
	int count_word;

	i = 0;
	j = 0;
	count_word = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset))
		{
			j = 0;
		}
		else if (!(ft_is_charset(str[i], charset)) && j == 0)
		{
			j = 1;
			count_word++;
		}
		i++;
	}
	return (count_word);
}

char	**ft_tab(char *str, char charset, char **tab, int i)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str[i])
	{
		if (ft_is_charset(str[i], charset) &&
		!(ft_is_charset(str[i + 1], charset)) && j > 0)
		{
			k++;
			j = 0;
		}
		if (!(ft_is_charset(str[i], charset)))
		{
			if (j == 0)
				tab[k] = malloc(sizeof(char) * ft_size_w(str, charset, i) + 1);
			tab[k][j] = str[i];
			tab[k][j + 1] = 0;
			j++;
		}
		i++;
	}
	tab[ft_count_words(str, charset)] = NULL;
	return (tab);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	if (!(tab = malloc(sizeof(char*) * ft_count_words((char *)str, c) + 1)))
		return (NULL);
	tab = ft_tab((char *)str, c, tab, i);
	return (tab);
}
