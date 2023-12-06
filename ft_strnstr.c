
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
