/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 19:19:25 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/07 19:43:24 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*src;
	int		i;
	int		size;

	if (min >= max)
		return (NULL);
	size = max - min;
	src = malloc(sizeof(int) * (size));
	if (src == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		src[i] = min;
		min++;
		i++;
	}
	return (src);
}

void	ft_putnbr(int n)
{
	char	c;
	
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_range(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		write(1, " ", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	int	min;
	int	max;
	int	*result;

	min = 5;
	max = 10;
	result = ft_range(min, max);
	ft_print_range(result, max - min);
	free(result);
	return (0);
}
