/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:55:37 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/18 16:43:22 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	end;

	end = 0;
	while (dest[end] != '\0')
		end++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[end] = src[i];
		i++;
		end++;
	}
	dest[end] = '\0';
	return (dest);
}

int	main(void)
{
	char	dest[10] = "hola";
	char	src[10] = " mundo";

	ft_strcat(dest, src);
	write(1, dest, 10);
	return (0);
}
