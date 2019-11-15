/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:28:19 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/15 14:28:31 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_digit_custo(int n)
{
	int nbc;

	if (!n)
		return (1);
	nbc = 0;
	while (n)
	{
		n /= 10;
		nbc++;
	}
	return (nbc);
}

void		ft_putnbr_fd(int n, int fd)
{
	char			a[12];
	unsigned char	i;
	int				nbc;

	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	nbc = ft_nb_digit_custo(n);
	i = 0;
	if (n < 0)
	{
		n = -n;
		a[0] = '-';
		write(fd, "-", 1);
	}
	a[nbc] = 0;
	while (nbc + 2)
	{
		a[--nbc] = n % 10 + '0';
		n /= 10;
	}
	write(fd, a, ft_strlen(a));
}
