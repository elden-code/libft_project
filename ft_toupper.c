/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:29:40 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:43:32 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c -32);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	char c = 'a';
	printf("res is : %c\n", ft_toupper(c));
	printf("orig is : %c\n", c);
	return 0;
}
*/
