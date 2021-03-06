/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <dait-atm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 06:24:06 by dait-atm          #+#    #+#             */
/*   Updated: 2020/11/16 06:28:07 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel_array(char ***s)
{
	size_t	i;

	if (!*s)
		return ;
	i = 0;
	while ((*s)[i])
		free((*s)[i++]);
	free(*s);
	*s = NULL;
}
