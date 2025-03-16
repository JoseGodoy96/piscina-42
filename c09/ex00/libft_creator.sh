# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unlucky <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 16:12:31 by unlucky           #+#    #+#              #
#    Updated: 2025/03/16 17:30:29 by unlucky          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/
gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
ranlib libft.a
