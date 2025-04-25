/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 21:57:03 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/19 21:57:03 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*res;

	len = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	res = malloc((len + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*
Funcion pointer
char (*f)(unsigned int, char)

	- pointer to a function that takes and unsigned int 
	and returns a char  

the name of a function decays to a pointer to that function 
when used in an expression. 
*/