/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 01:34:43 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/04 02:23:20 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>

void * ft_memset(void *b, int c, size_t len)
{
	unsigned char *p = (unsigned char *)b;
	unsigned char uc = (unsigned char)c;
	size_t i = 0;

	while (i < len)
	{
		p[i] = uc;
		i++;
	}
	return (b);
}
