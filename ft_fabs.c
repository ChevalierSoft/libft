/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fabs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 17:32:29 by dait-atm          #+#    #+#             */
/*   Updated: 2020/09/09 05:17:39 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_fabs(float f)
{
	if (f < 0)
		return (-f);
	return (f);
}
