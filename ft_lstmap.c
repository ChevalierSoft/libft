

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	v;
	tlist	head;

	if (lst)
	{
		v = ft_lstnew(lst->content);
		head = v;
		lst = ls->next;
		while (lst)
		{
			v = ft_lstnew(lst->content);
			ft_lstadd_back(&head, v);
			lst = lst->next;
		}
		return (head);
	}
}
