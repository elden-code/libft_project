/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 22:33:44 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/03 22:34:17 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	 size_t i;

	 i = 0;
	 while (i < n)
	 {
		 if (s1[i] != s2[i])
			 return (s1[i] - s2[i]);
		 if (s1[i] == '\0')
			 break ;
		 i++;
	 }
	 return (0);
}

char * ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len = 0;
	size_t i = 0;

	while (needle[needle_len])
		needle_len++;
	if (needle_len == 0)
		return ((char *)haystack) ;
	if (len < needle_len)
		return NULL ;
	while (i <= len - needle_len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
			return ((char *)(haystack + i)) ;
		i++;
	}
	return (NULL) ;
}
