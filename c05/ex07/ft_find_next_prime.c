/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:37:55 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/06 13:55:44 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if ((nb % i) == 0)
			return (ft_find_next_prime(nb + 1));
		i++;
	}
	return (i);
		
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	nb = 14;

	ft_find_next_prime(nb);
	ft_putnbr(ft_find_next_prime(nb));
	return (0);
}
