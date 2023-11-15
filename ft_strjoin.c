/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 00:07:37 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/08 00:10:55 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t ft_strlen(char const *str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return (i);
}

static char *strcpy(char *str1, char const *str2)
{
	size_t i = 0;

	while (str2[i])
	{
		str1[i] = str2[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

static char *strcat(char *str1, char const *str2)
{
	size_t j = ft_strlen(str1);
	size_t i = 0;

	while (str2[i])
	{
		str1[j + i] = str2[i];
		i++;
	}
	str1[j + i] = '\0';
	return (str1);
}



char *ft_strjoin(char const *s1, char const *s2)
{
	size_t s1len = ft_strlen(s1);
	size_t s2len = ft_strlen(s2);

	char *result = (char *)malloc(s1len + s2len +1);
	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strcat(result, s2);

	return (result);

}
