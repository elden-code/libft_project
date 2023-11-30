/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:46:19 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:07 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	s_len;
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (i < s_len)
	{
		f(i, &s[i]);
		++i;
	}
}
/*
#include <stdio.h>

void f(unsigned int i, char *c)
{
	printf("the index : %u, the char : %c\n", i, *c);
}

int main()
{
	char str1[] = "solayman";
	ft_striteri(str1, *f);
	printf("the output is : %s\n", str1);
}
*/
