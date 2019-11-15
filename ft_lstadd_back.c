/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 16:23:03 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/15 18:43:32 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	
	t_list *v;

	if (*alst)
	{
		v = ft_lstlast(*alst);
		v->next = new;
	}
	/*
	t_list *v;
	
	v = *alst;
	while (v->next)
	{
		v = v->next;
	}
	v->next = new;
*/
}
