/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:19:47 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/07 17:15:52 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int ft_strlen(char const *str)
{
	size_t len = 0;
	while (str[len])
		len++;
	return (len);
}

char * ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		*s++;
	}
	return (NULL);
}

char *ft_strncpy(char * dst, const char * src, size_t len)
{
	size_t		i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	return (dst);
}

char *ft_strtrim(char const *s1, char const *set)
{
	if (s1 == NULL || set == NULL)
		return (NULL);
	size_t s1_len;

	s1_len = ft_strlen(s1);
	char const *start = s1;
	char const *end = s1 + s1_len - 1;

	while (*start && ft_strchr(set, *start))
		start++;
	if (*start == '\0')
	{
		char *empty_str = (char *)malloc(1);
		if (empty_str = NULL)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	while (end > start && ft_strchr(set , *end))
		end--;
	size_t trimmed_len = end - start + 1;
	char *trimmed = (char *)malloc(trimmed_len + 1);
	if (trimmed == NULL)
		return (NULL);
	ft_strncpy(trimmed, start, trimmed_len);
	trimmed[trimmed_len] = '\0';
	return (trimmed);
}
