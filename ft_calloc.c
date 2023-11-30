/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:09:35 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/23 17:29:41 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	if (total_size / size != count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr != NULL)
		ft_bzero(ptr, total_size);
	return (ptr);
}
/*
#include <stdio.h>
#include <stdlib.h>

 
int main()
{

	char *ptr = (char*)ft_calloc(10, 0);

	printf("%p\n", ptr);
	printf("%s\n", ptr);
	return 0;
 
}
*/
