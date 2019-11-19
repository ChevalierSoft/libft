/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 18:17:25 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 18:56:44 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_from_base(char c, const char *set)
{
	while (*set)
	{
		if (*set++ == c)
			return (1);
	}
	return (0);
}

static size_t	faut_refaire(const char *s, const char *set, int sens)
{
	size_t	i;

	if (sens == -1)
		i = ft_strlen(s) - 1;
	else
		i = 0;
	while (s[i])
	{
		if (!ft_is_from_base(s[i], set))
			return (i);
		i += sens;
	}
	return (-1);
}

int				ft_stream_snip(const char *s1, const char *set)
{
	while (*s1)
	{
		if (ft_is_from_base(*s1, set))
			return (0);
		s1++;
	}
	return (1);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	beg;
	size_t	size;
	char	*s2;

	if (!set || !s1)
		return (0);
	//if (!strcmp(set, ""))
	//	return (ft_strdup(""));
	if (ft_stream_snip(s1, set))
		return (s1);
	beg = faut_refaire(s1, set, 1);
	size = 1 + faut_refaire(s1, set, -1) - beg;
	if (!(s2 = malloc(sizeof(char) * size + 1)))
		return (0);
	ft_memcpy(s2, s1 + beg, size);
	s2[size] = 0;
	return (s2);
}
/*
#include <stdlib.h>
#include <unistd.h>
int main(void)
{
	char *s1 = ft_strtrim("          ", " ");
	//char *s2 = strtrim("          ", " ");
	ft_print_memory(s1, 16);
	write(1, "\n", 1);
	//ft_print_memory(s2, 16);
	//return (strcmp(s1,s2));
	return (0);
}
*/
