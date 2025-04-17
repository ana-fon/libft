/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 18:22:46 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/15 18:22:46 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle || needle [0] == '\0')
		return ((char *) haystack);
	while (haystack[i] && i < len)
	{
		while (haystack[i + j] == needle [j] && haystack[i + j] && i + j < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) haystack + i);
		}
		i++;
		j = 0;
	}
	return (o);
}

LÊ ISTO PÁ

/*
o (char *) é importante pois haystack é um const char*, ou seja o conteúdo de haystack não
pode ser alterado. No entanto, fazemos cast para (char *) para o início da substring,
permitindo assim realizar alterações.
*/