/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <dait-atm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:24:56 by dait-atm          #+#    #+#             */
/*   Updated: 2020/11/23 11:39:21 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcut(char *s, int beg, int end)
{
	int		i;
	char	*d;

	if (!s || beg <= end)
		return (NULL);
	d = malloc(sizeof(char) * (end - beg + 1));
	if (!d)
		return (NULL);
	i = beg;
	while (i < end)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
