
#include "libft.h"

static char	*ft_strcpy(char *str1, char const *str2)
{
	size_t	counter;

	counter = 0;
	while (str2[counter])
	{
		str1[counter] = str2[counter];
		counter++;
	}
	str1[counter] = '\0';
	return (str1);
}

static char	*ft_strcat(char *str1, char const *str2)
{
	size_t	str1_len;
	size_t	i;

	str1_len = ft_strlen(str1);
	i = 0;
	while (str2[i])
	{
		str1[str1_len + i] = str2[i];
		i++;
	}
	str1[str1_len + i] = '\0';
	return (str1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*result;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = (char *)malloc(s1len + s2len +1);
	if (result == NULL)
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcat(result, s2);
	return (result);
}
