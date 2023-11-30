/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:09:19 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/24 15:58:13 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	char	*result;
	size_t	str_len;

	str_len = ft_strlen(str);
	if (start >= ft_strlen(str))
		return (ft_strdup(""));
	else if (len + start > str_len)
		substr = (char *)malloc((str_len - start + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	result = substr;
	while (*(str + start) && len-- > 0)
		*substr++ = *(str + start++);
	*substr = 0;
	return (result);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hola";
	//int start = 18;
	size_t len = 145377;

	printf("str before : %s\n", str);
	printf("output : %s\n", ft_substr("hola", 0, 5));
	printf("str after : %s\n", str);
	return 0;
}
*/
