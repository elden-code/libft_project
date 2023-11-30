/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:17:57 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/25 11:28:00 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

void    *addone(void *content)
{
    char *s = (char *)content;

    while (*s)
    {
        *s = *s + 1;
        s++;
    }
    return (content);
}

void ft_del(void *content)
{
    free(content);
}

int main()
{
    t_list *one, *two, *new;
    char *s1 = ft_strdup("3131");
    char *s2 = ft_strdup("0226");

    one = ft_lstnew(s1);
    two = ft_lstnew(s2);

    one->next = two;

    new = ft_lstmap(one, &addone, &ft_del);

    while (new)
    {
        printf("%s\n", new->content);
        new = new->next;
    }
}

