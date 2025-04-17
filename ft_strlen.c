/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 17:40:02 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/16 01:16:02 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t			len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		len++;
		i++;
	}
	return (len);
}
