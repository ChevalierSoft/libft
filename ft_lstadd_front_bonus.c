#include "libft.h"

void				ft_lstadd_front(t_list **alst, t_list *nlst)
{
	if (!*alst)
	{
		*alst = nlst;
	}
	else
	{
		nlst->next = *alst;
		*alst = nlst;
	}
}
