/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:36:07 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/20 19:34:36 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Este ejercicio no lo he realizado en piscina pero he 
 * realizado un planteamiento basico me he dado cuenta 
 * de que el int que le damos coincide con la secuencia 
 * numerica planteada en el ex05 no he conseguido acabar
 * de plantearlo pero lo volvere a intentar en el futuro.
 */ 

void	ft_print_combn(int n)
{
	char	i;
	char	j;

	i = '0';
	while (i <= '8')
	{
		j = i + 1;
		while (j <= '9')
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_combn(2);
	return (0);
}
