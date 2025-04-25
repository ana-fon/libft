/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 16:50:00 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/11 16:50:00 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*temp_src;
	unsigned char	*temp_dst;
	size_t			i;

	i = -1;
	if (!src && !dst)
		return (NULL);
	temp_src = (unsigned char *) src;
	temp_dst = (unsigned char *) dst;
	if (temp_dst > temp_src)
	{
		while (len-- > 0)
		{
			temp_dst[len] = temp_src[len];
		}
	}
	else
	{
		while (++i < len)
		{
			temp_dst[i] = temp_src[i];
		}
	}
	return (dst);
}

/*
The  memmove()  function  copies  n bytes from memory area src to
memory area dest.  The memory areas may  overlap:  copying  takes
place  as  though the bytes in src are first copied into a tempo‐
rary array that does not overlap src or dest, and the  bytes  are
then copied from the temporary array to dest.
*/