
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			count;
	unsigned char	*uc_s;

	uc_s = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		uc_s[count] = 0;
		count++;
	}
}
