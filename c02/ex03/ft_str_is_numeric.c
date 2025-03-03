/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:10:53 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:09:45 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

void	correccion(int n)
{
	char	c;

	if (n >= 10)
		correccion (n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main()
{
	char	str[] = "123";
	char	str1[] = "asb123";
	char	str2[] = "";

	correccion(ft_str_is_numeric(str));
	correccion(ft_str_is_numeric(str1));
	correccion(ft_str_is_numeric(str2));
	return 0;
}
