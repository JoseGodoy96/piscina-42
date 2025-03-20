/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:59:09 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/05 13:54:46 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Este ejercicio no lo he realizado en 
 * piscina quiero creer que esta bien
 * me da error al compilar con -Werror
 * -Wall -Wextra pero creo que es por el
 * main.
*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	if (nb < 0)
		return (0);
	if (nb >= 0)
	{
		i = 1;
		total = 1;
		while (i <= nb)
		{
			total = i * total;
			i++;
		}
		return (total);
	}
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	nb = 0;

	ft_iterative_factorial(nb);
	ft_putnbr(ft_iterative_factorial(nb));
	return (0);
}
