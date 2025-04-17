/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 17:23:01 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/13 17:23:01 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	char			cc;

	cc = (char) c;
	len = ft_strlen(s);
	if (s[len] == c)
		return ((char *) &s[len]);
	while (len > 0)
	{
		len--;
		if (s[len] == c)
			return ((char *) &s[len]);
	}
	return (NULL);
}
