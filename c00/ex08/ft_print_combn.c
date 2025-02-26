/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:36:07 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/26 19:12:16 by unlucky          ###   ########.fr       */
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

void	printme(int n, int i, int j, int k)
{
	if (n == 2)
	{
		write(1, &i, 1);
		write(1, &j, 1);
	}
	else if (n == 3)
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, &k, 1);
	}
		
}

void	ft_print_combn(int n)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		i = j + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				printme(n, i, j, k);
				write(1, " ", 1);
				k++;
			}
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
