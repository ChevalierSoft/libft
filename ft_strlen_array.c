/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 06:58:02 by dait-atm          #+#    #+#             */
/*   Updated: 2020/12/31 18:33:51 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_array(char **sa)
{
	size_t	i;

	if (!sa)
		return (0);
	i = 0;
	while (sa[i])
		i++;
	return (i);
}
