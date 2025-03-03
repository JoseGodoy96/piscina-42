/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:23:54 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/03 14:40:19 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Este ejercicio no lo he pasado por moullinette,
 * pero aparentemente me da bien el ejmplo no se si sera correcto
 */ 

#include <unistd.h>

void	ft_strlowcase(int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
	{
		str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			cap = 1;
		if (((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= '0' && str[i] <= '9')) && (cap == 1))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			cap = 0;
			i++;
		}
		ft_strlowcase(i, str);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[63] = "salut, coMment tu vAs ? 42mots quaRante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	write(1, str, 63);
	return (0);
}
