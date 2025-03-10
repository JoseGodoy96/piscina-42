/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: unlucky <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 19:29:05 by unlucky           #+#    #+#             */
/*   Updated: 2025/03/10 17:08:30 by unlucky          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_count(int size, char **strs, char *sep)
{
	char	*all;
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (size <= 0)
		count = 1;
	else
	{
		while (i < size)
		{
			count += ft_strlen(strs[i]);
			i++;
		}
		count += ft_strlen(sep) * (size - 1);
	}
	all = (char *) malloc(sizeof(char) * (count + 1));
	if (all == NULL)
		return (0);
	return (all);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*all;
	int		i;
	int		j;
	int		k;

	all = ft_count(size, strs, sep);
	i = 0;
	k = 0;
	while (size > 1)
	{
		j = 0;
		while (strs[i][j])
			all[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			all[k++] = sep[j++];
		i++;
	}
	all[k] = '\0';
	return (all);
}
