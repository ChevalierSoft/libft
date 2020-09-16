#include "libft.h"

t_list	*ft_lstgetnb(t_list *alst, int nb)
{
	t_list *n;

	n = alst;
	while (nb > 0)
	{
		n = n->next;
		nb--;
	}
	return (n);
}