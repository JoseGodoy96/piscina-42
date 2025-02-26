/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:30:38 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/25 20:23:02 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* 
todos estos ejercicios estan siendo realizados 
tras la piscina de febrero en malaga este
ejercicio no ha sido pasado por la norminette.
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printcomb(int n)
{
	if (n < 10)
	{
		write(1, "0", 1);
		ft_putchar(n + '0');
	}
	if (n >= 10)
	{
		ft_putchar(n / 10 + '0');
		ft_putchar(n % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			printcomb(i);
			write(1, " ", 1);
			printcomb(j);
			if (i < 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
