/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 17:54:56 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/04 00:30:08 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
 * Este ejercicio tampoco lo habia 
 * hecho en la piscina asi que no se
 * si esta correctamente.
 */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_conver_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
			ft_conver_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	char	str[30] = "Co\tucou\ntu vas bi\xen ?";

	ft_putstr_non_printable(str);
	write(1, str, 30);
	return (0);
}
