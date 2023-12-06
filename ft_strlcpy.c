
#include "libft.h"

size_t	ft_strlcpy(char	*dst, const	char	*src, size_t	dstsize)
{
	size_t	srclen;
	size_t	count;

	srclen = 0;
	srclen = ft_strlen(src);
	count = 0;
	if (dstsize > 0)
	{
		while (count < dstsize - 1 && src[count])
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (srclen);
}
