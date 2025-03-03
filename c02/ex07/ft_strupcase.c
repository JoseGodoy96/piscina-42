/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:53:19 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:19:48 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

void	correccion(char *crc)
{
	int	i;

	i = 0;
	while (crc[i] != '\0')
	{
		write(1, &crc[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "hola";

	ft_strupcase(str);
	correccion(str);
	return (0);
}
