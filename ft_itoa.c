/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anisabel <anisabel@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:36:17 by anisabel          #+#    #+#             */
/*   Updated: 2025/04/19 15:36:17 by anisabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc((len + 1) * sizeof(char));
	if (!tmp)
		return (0);
	tmp[len] = 0;
	return (tmp);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*res;
	int		len;

	nbr = n;
	len = int_len(nbr);
	res = pre_conv(len);
	if (!res)
		return (NULL);
	if (nbr == 0)
		res[0] = '0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		res[--len] = ((nbr % 10) + 48);
		nbr /= 10;
	}
	return (res);
}

/*
itoa - converte inteiro para string

Uses dynamic memory allocation; the caller must free de memory.
Return: A pointer to the NULL-terminated string representing the 
	integer; returns NULL if memory allocation fails.
*/
/*
1. long int para int min e max não serem problema;
*/
/*
1. Se nbr < 0, count ++ e nbr = *= 1

2. se nbr = 0, count ++

3. dividir por 10 e somar
*/
/*
- Aloca (malloc) e retorna um string que representa n
- necessário ter em conta numeros negativos
- return = string que foi alocada; se a alocação de memoria não for bem sucedida
retorna NULL
*/
/*
HINTS
1. Necessário saber quanta memória via ser necessária alocar 
(com - se necessário);
construir uma função que conte o número de char que representa um núemro
2. Alocar mem + 1;
3. Converter num em string; da direita p esquerda e usar %;
*/