/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:18:37 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:33:30 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char	*ft_strdup(const char *s1)
{
	char	*r;
	size_t	sz;

	sz = ft_strlen(s1) + 1;
	if (!(r = malloc(sz)))
		return (0);
	return (ft_memcpy(r, s1, sz));
}
