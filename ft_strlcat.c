/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 23:08:50 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/12 23:08:50 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	i = 0;
	while ((dst_len + i + 1) < size && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = 0;
	return (dst_len + src_len);
}

/*
according to the standard behaviour of strlcat, the return value is
dstlen + srclen, or the total length it tried to create, regardless 
of whether truncation occurred.

its not that dstlen is equal to size, but we could only read to 
size - 1. 
{
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (!dst && size == 0)
		return (src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (src_len + size);
	size -= dst_len;
	ft_strlcpy(dst + dst_len, src, size);
	return (dst_len + src_len);
}
*/