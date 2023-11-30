/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:33:44 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/20 01:36:05 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i_mem;
	size_t	i_tofind;

	i_mem = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i_mem] != '\0' && i_mem < len)
	{
		i_tofind = 0;
		while (haystack[i_mem] != needle[i_tofind] && haystack[i_mem] != '\0')
			i_mem++;
		if (haystack[i_mem] == '\0')
			return (NULL);
		i = i_mem;
		while ((haystack[i] == needle[i_tofind]
				|| needle[i_tofind] == '\0') && i++ <= len)
			if (needle[i_tofind++] == '\0')
				return ((char *)&haystack[i_mem]);
		if (i > len)
			return (NULL);
		i_mem++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char *str1 = NULL;
	char str2[] = "duguui";
	size_t len = 5;
	printf("the res : %s \n", ft_strnstr(str1, str2, len));
	return 0;
}
*/
