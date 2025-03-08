/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:46:21 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/08 19:21:16 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (size));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

void	ft_putnbr(int n)
{
	char	c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	*array;
	int	size;
	int	i;

	size = ft_ultimate_range(&array, 5, 10);
	if (size == -1)
		return (1);
	i = 0;
	while (i < size)
	{
		ft_putnbr(array[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	free(array);
	return (0);
}
