
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		lst_size;

	lst_size = 0;
	while (lst)
	{
		lst_size++;
		lst = lst ->next;
	}
	return (lst_size);
}
