#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	while (lst && ++i)
		lst = lst->next;
	return (i - 1);
}
