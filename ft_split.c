/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 10:52:53 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/17 10:52:53 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countwords(char const *s, char c)
{
	size_t count;

	if (!s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if(*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}


char	**ft_split(const char *s, char c)
{
	char	**res;
	size_t	word_count;
	int		i;

	res = malloc((ft_countwords(s,c) + 1) * sizeof(char *));
	if (!res)
		return (0);

	i = 0;

	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (!ft_strcchr(s, c))	//verificar se c está no meio da palavra
			word_len = ft_strlen(s);
		else
			word_len = 
	}
}


/*
separa uma string num array de palavras

aloca e retorna um array de strings; resultado de splitting 
com o caracter c como delimitador

retorna um array de strings 

array of arrays => array of strings => array of words

cada string deve ser NULL temrinated
*/