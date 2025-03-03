/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:45:41 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:15:17 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char	str[] = "asd";
	char	str1[] = "ç";
	char	str2[] = "";

	correccion(ft_str_is_printable(str));
	correccion(ft_str_is_printable(str1));
	correccion(ft_str_is_printable(str2));
	return (0);
}
