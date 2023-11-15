/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:24:46 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/04 02:54:57 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stddef.h>

void * ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *dst_ptr = (unsigned char *)dst;
	unsigned char *src_ptr = (unsigned char *)src;
	size_t i = 0;

	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
