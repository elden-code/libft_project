/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 18:36:03 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/23 17:52:36 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int		count;

	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static char	*skip_c(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static	char	*fill_str(char **ptr, const char *s, size_t i, size_t len)
{
	size_t	j;

	j = -1;
	while (++j < len)
		ptr[i][j] = s[j];
	ptr[i][j] = 0;
	return ((char *)(s + len));
}

static	void	free_split(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	size;
	size_t	len;
	size_t	i;

	i = 0;
	size = count_words(s, c) + 1;
	ptr = (char **)malloc(size * sizeof(char *));
	if (!ptr)
		return (0);
	while (--size)
	{
		len = 0;
		s = skip_c(s, c);
		while (s[len] && s[len] != c)
			len++;
		ptr[i] = (char *)malloc(len + 1);
		if (!ptr[i])
		{
			free_split(ptr);
			return (0);
		}
		s = fill_str(ptr, s, i++, len);
	}
	return (ptr[i] = 0, ptr);
}
/*
#include <stdio.h>
int main() {
    char c = ' ';
    char s[] = "df sa df sa sdf abb b";
    char **str = ft_split(s, c);

    for (int i = 0; str[i] != NULL; i++) {
        printf("str num [%d] = %s\n", i, str[i]);
        free(str[i]);
    }
    free(str);

    return 0;
}
*/
