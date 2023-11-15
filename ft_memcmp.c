/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 21:50:40 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/04 22:15:24 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ucs1 = (const unsigned char *)s1;
	const unsigned char *ucs2 = (const unsigned char *)s2;

	size_t i = 0;
	while (i < n)
	{
		if (ucs1[i] > ucs2[i])
			return (1);
		else if (ucs1[i] < ucs2[i])
			return (-1);
		i++;
	}
	return (0);
}
