/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 17:11:35 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/06 14:54:14 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char			*ft_strrchr(const char *s, int c)
{
	long			last;

	last = ft_strlen(s) - 1;
	if (!(char)c)
		return (strchr(s, (char)c));
	while (last >= 0)
	{
		if (s[last] == (char)c)
			return (&((char *)s)[last]);
		last--;
	}
	return (0);
}
