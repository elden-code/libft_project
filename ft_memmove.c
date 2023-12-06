
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_b;
	const unsigned char	*src_b;
	size_t				index;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_b = dst;
	src_b = src;
	if (dst_b > src_b)
	{
		index = len;
		while (index-- > 0)
			dst_b[index] = src_b[index];
	}
	else
	{
		index = 0;
		while (index < len)
		{
			dst_b[index] = src_b[index];
			index++;
		}
	}
	return (dst);
}
