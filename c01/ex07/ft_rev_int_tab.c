/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:10:25 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/26 18:00:38 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	temp;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
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

void	ft_putstr(int *crr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(crr[i]);
		write(1, " ", 1);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size = 6;

	ft_rev_int_tab(tab, size);
	ft_putstr(tab, size);
	return (0);
}
