#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *n;
	t_list *head;

	if (!lst)
		return (NULL);
	if (!(n = ft_lstnew(f(lst->content))))
		return (NULL);
	head = n;
	while (lst->next)
	{
		lst = lst->next;
		if (!(n->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		n = n->next;
	}
	return (head);
}
