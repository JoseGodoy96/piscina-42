/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgodoy-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 19:03:26 by jgodoy-m          #+#    #+#             */
/*   Updated: 2025/03/03 13:21:29 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
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
	char	str[] = "HOLA";

	ft_strlowcase(str);
	correccion(str);
	return (0);
}
