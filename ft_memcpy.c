
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst == src)
		return (src);
	i = 0;
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	while (i < n)
	{
		dst_ptr[i] = src_ptr[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char dst[] = "";
	char src[] = "elmouden";
	size_t n = 0;

	ft_memcpy(NULL, src, n);
	printf("the dst is : %s\n", dst);
	printf("the src is : %s\n", src);
	return 0;
}
*/
