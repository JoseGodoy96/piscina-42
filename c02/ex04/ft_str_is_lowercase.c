/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:32:04 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:11:25 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
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
	char	str[] = "abc";
	char	str1[] = "abcABC";
	char	str2[] = "";

	correccion(ft_str_is_lowercase(str));
	correccion(ft_str_is_lowercase(str1));
	correccion(ft_str_is_lowercase(str2));
	return (0);
}
