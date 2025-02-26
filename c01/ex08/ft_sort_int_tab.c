/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:01:57 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/26 19:07:36 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 *Este ejercicio no lo realice en la piscina
 asi que no lo pase por la molinette. Es un algoritmo
 de ordenacion. Hay distintos, este es uno llamado algoritmo burbuja.
*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	end;
	int	temp;

	i = 0;
	end = size - 1;
	while (i < end)
	{
		j = 0;
		while (j < end - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		write(1, " ", 1);
		i++;
	}
}

int	main(void)
{
	int tab[] = {5, 3, 8, 1, 2, 7};
	int size = 6;

	ft_sort_int_tab(tab, size);
	ft_print_array(tab, size);
	
	return (0);
}
