/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:04:30 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/02 17:51:53 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t dstlen = 0;
	size_t srclen = 0;
	while (dst[dstlen] && dstlen < dstsize - 1)
		dstlen++;
	while (src[srclen] && srclen < dstsize - dstlen - 1)
	{
		dst[dstlen + srclen] = src[srclen];
		srclen++;
	}
	dst[dstlen + srclen] = '\0';
	return (dstlen + srclen);
}
