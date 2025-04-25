/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:06:04 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/25 00:39:35 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *) b;
	while (n > 0)
	{
		*tmp = (unsigned char) c;
		n--;
		tmp++;
	}
	return (b);
}

/*
The  memset() function fills the first n bytes of the 
memory area pointed to by swith the constant byte c.
*/