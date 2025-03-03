/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:39:24 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:14:06 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] >= 'Z'))
			return (0);
		i++;
	}
	return (1);
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
	char	str[] = "ABC";
	char	str1[] = "ABCabc";
	char	str2[] = "";

	correccion(ft_str_is_uppercase(str));
	correccion(ft_str_is_uppercase(str1));
	correccion(ft_str_is_uppercase(str2));
	return (0);
}
