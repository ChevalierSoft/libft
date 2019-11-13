/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:35:02 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/13 19:53:51 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != 0)
	{
		if ((unsigned char)c == ((unsigned char *)src)[i])
			return (&dst[i + 1]);
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (0);
}
