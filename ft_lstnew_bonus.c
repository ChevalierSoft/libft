/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 14:38:10 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/20 18:13:55 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *v;

	if (!(v = (malloc(sizeof(t_list)))))
		return (0);
	v->content = content;
	v->next = 0;
	return (v);
}
