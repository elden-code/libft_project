
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	s_len;
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	s_len = 0;
	while (s[s_len])
		s_len++;
	while (i < s_len)
	{
		f(i, &s[i]);
		++i;
	}
}
