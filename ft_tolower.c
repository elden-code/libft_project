/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:34:15 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:43:45 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}
/*

#include <stdio.h>
int main()
{
	char c = 'A';
	printf("res is : %c\n", ft_tolower(c));
	printf("orig is : %c\n", c);
	return 0;
}
*/
