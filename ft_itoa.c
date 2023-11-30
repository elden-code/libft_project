/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:33:27 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/19 22:22:31 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	handle_sign_and_digit(int n_mem, char *str)
{
	if (n_mem < 0)
	{
		str[0] = '-';
		str[1] = (char)(-n_mem + '0');
	}
	else
	{
		str[0] = (char)n_mem + '0';
		str[1] = str[1];
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	str_size;
	int		n_mem;

	n_mem = n;
	if (n < 0)
		str_size = 3;
	else
		str_size = 2;
	while ((n > 9 || n < -9) && str_size++)
		n /= 10;
	str = (char *)malloc((str_size--) * sizeof(char));
	if (!str)
		return (NULL);
	str[str_size--] = '\0';
	while (n_mem > 9 || n_mem < -9)
	{
		if (n_mem < 0)
			str[str_size--] = -(n_mem % 10) + '0';
		else
			str[str_size--] = n_mem % 10 + '0';
		n_mem = n_mem / 10;
	}
	handle_sign_and_digit(n_mem, str);
	return (str);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	int n = -2147483648;
	char *str = ft_itoa(n);
	printf("the my_res is : %s \n", str);
//	printf("the or_res is : %s \n", itoa(n));
	return 0;
}
*/
