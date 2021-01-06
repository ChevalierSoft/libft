/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_str_array.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <dait-atm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 11:51:03 by dait-atm          #+#    #+#             */
/*   Updated: 2021/01/06 14:04:33 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_realloc_str_array(char ***ar, int nb)
{
	char	**as;
	int		i;

	as = malloc(sizeof(char *) * nb);
	if (!as)
		return (NULL);
	i = 0;
	while (i < nb - 1 && (*ar)[i])
	{
		as[i] = (*ar)[i];
		i++;
	}
	as[i] = NULL;
	free(*ar);
	return (as);
}
