/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bouns.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:00:36 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/24 17:03:04 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
int main() {
    t_list *node1 = ft_lstnew(NULL);
    t_list *node2 = ft_lstnew("elmouden");

    if (node2 != NULL) {
        printf("Content: %s\n", (char *)node2->content);

        free(node2);
    } else {
        printf("Failed to create node\n");
    }
	printf("size : %s \n", (char *)node1->content);

    return 0;
}
*/
