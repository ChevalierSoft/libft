#include "libft.h"

void				ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	if (!*lst)
		return ;
	while ((*lst)->next)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, del);
	}
	del((*lst)->v);
	free(*lst);
	*lst = NULL;
}
