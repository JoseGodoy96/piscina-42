/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 20:24:04 by unlucky           #+#    #+#             */
/*   Updated: 2025/02/27 11:16:16 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	end;

	while (dest[end] != '\0')
		end++;
	while (src[i] != '\0' && i < nb)
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

	ft_strncat(dest, src, 6);
	write(1, dest, 10);
	return (0);
}
