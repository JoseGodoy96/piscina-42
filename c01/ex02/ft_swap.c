/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:09:39 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/26 16:28:21 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	correccion(int n)
{
	char	c;

	if (n >= 10)
		correccion(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	int	a = 4;
	int	b = 2;

	ft_swap(&a, &b);
	correccion(a);
	write(1, "\n", 1);
	correccion(b);
	return (0);
}
