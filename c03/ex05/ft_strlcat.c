/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:49:51 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/27 17:29:58 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *Este ejercicio no lo he realizado en la piscina
 asi que no tengo muy claro de si es correcto o si
 es incorrecto
*/ 

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	end;
	unsigned int	i;

	end = 0;
	while (dest[end] != '\0' && end < size)
		end++;
	if (end >= size)
	{
		i = 0;
		while (src[i] != '\0')
			i++;
		return (end + i);
	}
	while (src[i] != '\0' && end + i < size - 1)
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (end + i);
}
