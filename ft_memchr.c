/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:03:22 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/04 21:39:35 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void * memchr(const void *s, int c, size_t n)
{
	const unsigned char * ucptr = (unsigned char *)s;
	int i = 0;
	while (ucptr[i])
	{
		if (ucptr[i] == (unsigned char)c)
			return ((void *)(ucptr + i));
		i++;
	}
	return (NULL);
}
