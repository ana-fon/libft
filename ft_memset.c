/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:06:04 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/10 21:46:44 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;
	
	tmp = (unsigned char *) b;

	while (len > 0)
	{
		*tmp = (unsigned char) c;
		len--; 
		*tmp++;
	}
	return (b);
}