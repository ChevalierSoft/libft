#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *n;

	if (*alst)
	{
		n = ft_lstlast(*alst);
		n->next = new;
	}
	else
	{
		*alst = new;
	}
}
