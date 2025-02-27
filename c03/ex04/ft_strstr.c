/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 11:18:40 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/27 12:36:42 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

void	ft_putstr(char *crr)
{
	int	i;

	i = 0;
	while (crr[i] != '\0')
	{
		write(1, &crr[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[50] = "hola que tal estas mi nombre es jose maria";
	char	to_find[5] = "jose";
	
	ft_strstr(str, to_find);
	ft_putstr(ft_strstr(str, to_find));
	return (0);
}
