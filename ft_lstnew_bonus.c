#include "libft.h"

t_list				*ft_lstnew(void *v)
{
	t_list *n;

	if (!(n = malloc(sizeof(t_list))))
	{
		write(1, "not enough space\n", 16);
		return (NULL);
	}
	n->v = v;
	n->next = NULL;
	return (n);
}
