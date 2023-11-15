/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-mou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:04:02 by soel-mou          #+#    #+#             */
/*   Updated: 2023/11/02 15:55:07 by soel-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t srclen;

	srclen = 0;
	while (src[srclen] && srclen < dstsize)
	{
		dst[srclen] = src[srclen];
		srclen++;
	}
	dst[srclen] = '\0';
}
