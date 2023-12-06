
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i_src;
	size_t	i_dst;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i_src = 0;
	i_dst = dst_len;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i_src] && (size-- - (dst_len + 1)) > 0)
		dst[i_dst++] = src[i_src++];
	dst[i_dst] = '\0';
	return (dst_len + src_len);
}
