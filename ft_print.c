/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 01:40:07 by dait-atm          #+#    #+#             */
/*   Updated: 2020/07/27 01:45:06 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_printr(char *s)
{
	print(MAG);
	print(s);
	print(RST);
}

void	ft_help(void)
{
	printr("help\n");
}
