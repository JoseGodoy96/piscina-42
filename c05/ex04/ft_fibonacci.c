/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 18:26:07 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/05 18:58:11 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

void	ft_putnbr(int index)
{
	char	c;

	if (index < 0)
	{
		write(1, "-", 1);
		index = -index;
	}
	if (index >= 10)
		ft_putnbr(index / 10);
	c = (index % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	index = 5;

	ft_fibonacci(index);
	ft_putnbr(ft_fibonacci(index));
	return (0);
}
