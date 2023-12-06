
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_list;
	t_list	*n_node;
	void	*set;

	if (!lst && !f && !del)
		return (NULL);
	n_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		n_node = ft_lstnew(set);
		if (!n_node)
		{
			del(set);
			ft_lstclear(&n_list, (*del));
			return (n_list);
		}
		ft_lstadd_back(&n_list, n_node);
		lst = lst->next;
	}
	return (n_list);
}