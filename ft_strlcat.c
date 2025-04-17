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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	if (len_dst >= dstsize)
		len_dst = dstsize;
	if (dstsize == len_dst)
	{
		return (dstsize + len_src);
	}
	if (len_src < dstsize - len_dst)
	{
		ft_memcpy(dst + len_dst, src, len_dst + 1);
	}
	else
	{
		ft_memcpy(dst + len_dst, src, dstsize - len_dst - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dstsize + len_src);
}
