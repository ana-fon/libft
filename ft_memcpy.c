/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:42:15 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/11 16:42:15 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_temp;
	unsigned char	*src_temp;

	if (!src && !dst)
		return (dst);
	dst_temp = (unsigned char *) dst;
	src_temp = (unsigned char *) src;
	while (n > 0)
	{
		*dst_temp = *src_temp;
		dst_temp++;
		src_temp++;
		n--;
	}
	return (dst);
}
