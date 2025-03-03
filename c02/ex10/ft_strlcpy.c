/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:41:25 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/03 17:54:06 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Esta funcion no ha sido pasada por la moullinete.
 * no se si es correcta.
 */ 


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	end;

	i = 0;
	end = size - 1;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (src[i] != '\0' && i < end)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr(unsigned int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char src1[] = "Hola, Mundo!";
	char dest1[20];
	unsigned int len1 = ft_strlcpy(dest1, src1, 10);

	ft_putnbr(ft_strlcpy(dest1, src1, 10));
	return (0);
}
