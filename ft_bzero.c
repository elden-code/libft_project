/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:18:11 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:45:33 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*uc_s;

	uc_s = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		uc_s[count] = 0;
		count++;
	}
}
/*
#include <strings.h>
#include <stdio.h>

int main()
{
    char buffer[10];
	size_t n = sizeof(buffer);
    ft_bzero(buffer, n); 
    for (size_t i = 0; i < sizeof(buffer); ++i)
    {
        printf("%d ", buffer[i]);
    }

    return 0;
}
*/
