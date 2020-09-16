/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/27 01:40:07 by dait-atm          #+#    #+#             */
/*   Updated: 2020/07/27 02:01:18 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print(char *s)
{
	write(1, s, ft_strlen(s));
}

void	ft_printr(char *s)
{
	ft_print(MAG);
	ft_print(s);
	ft_print(RST);
}

void	ft_help(void)
{
	ft_printr("help\n");
}
