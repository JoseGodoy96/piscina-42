/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:12:38 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/27 18:34:58 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	value;

	value = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * sign);

}

void	ft_putnbr(int n)
{
	char c;

	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}	
	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(void)
{
	char str1[] = "   -12345";
	char str2[] = "42";
	char str3[] = "  +67";
	char str4[] = "  -  90";
	char str5[] = "123abc";

	ft_putnbr(ft_atoi(str1));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi(str2));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi(str3));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi(str4));
	write(1, "\n", 1);
	ft_putnbr(ft_atoi(str5));
	write(1, "\n", 1);
	return (0);
}
