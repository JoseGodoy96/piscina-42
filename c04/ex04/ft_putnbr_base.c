/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:56:44 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/05 12:53:54 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	if (i == 16)
	{
		if (nbr >= 16)
			ft_putnbr_base(nbr / 16, base);
		ft_putchar(base[nbr % 16]);
	}
	if (i == 10)
	{
		if (nbr >= 10)
			ft_putnbr_base(nbr / 10, base);
		ft_putchar(nbr % 10 + '0');
	}


}

int	main(void)
{
	int	nbr = 98726;
	char	*base = "0123456789";

	ft_putnbr_base(nbr, base);
	return (0);
}
