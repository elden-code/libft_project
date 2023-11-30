/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:09:38 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/20 20:02:14 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		s_lenght;

	s_lenght = ft_strlen(s);
	if (c)
	{
		while (s_lenght >= 0)
		{
			if (s[s_lenght] == (char)c)
				return ((char *)&s[s_lenght]);
			s_lenght--;
		}
		return (NULL);
	}
	return ((char *)&s[s_lenght]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "test";
	char c = '\0';
	printf("the res is : %s\n", ft_strrchr(str, c));
	return 0;
}
*/
