

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
