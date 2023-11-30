/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 02:56:26 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/20 01:15:25 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_b;
	const unsigned char	*src_b;
	size_t				index;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_b = dst;
	src_b = src;
	if (dst_b > src_b)
	{
		index = len;
		while (index-- > 0)
			dst_b[index] = src_b[index];
	}
	else
	{
		index = 0;
		while (index < len)
		{
			dst_b[index] = src_b[index];
			index++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main ()
{
    char dest[] = "Aticleworld";
    const char src[]  = "Amlendra";
    printf("Before memmove >> dest = %s, src = %s\n\n", dest, src);
    ft_memmove(dest, src, 20);
    printf("After memmove >> dest = %s, src = %s\n\n", dest, src);
    return 0;
}
*/
