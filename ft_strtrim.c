

#include "libft.h"

static char	*ft_strncpy(char *str1, char const *str2, size_t n)
{
	size_t	counter;

	counter = 0;
	while (counter < n)
	{
		str1[counter] = str2[counter];
		counter++;
	}
	str1[counter] = '\0';
	return (str1);
}

static char	*ft_malloc_empty(void)
{
	char	*empty_str;

	empty_str = (char *)malloc(1);
	if (empty_str == (NULL))
		return (NULL);
	empty_str[0] = '\0';
	return (empty_str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		s1_len;
	char const	*start;
	char const	*end;
	size_t		trimmed_len;
	char		*trimmed;

	if (s1 == NULL || set == NULL)
		return (NULL);
	s1_len = ft_strlen(s1);
	start = s1;
	end = s1 + s1_len - 1;
	while (*start && ft_strchr(set, *start))
		start++;
	if (*start == '\0')
		return (ft_malloc_empty());
	while (end > start && ft_strchr(set, *end))
		end--;
	trimmed_len = end - start + 1;
	trimmed = (char *)malloc(trimmed_len + 1);
	if (trimmed == NULL)
		return (NULL);
	trimmed = ft_strncpy(trimmed, start, trimmed_len);
	return (trimmed);
}
