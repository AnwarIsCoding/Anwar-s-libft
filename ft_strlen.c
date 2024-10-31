<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:56:23 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/21 17:12:54 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
=======
#include <stddef.h>

size_t ft_strlen(char const *str)
{
    int  i;
    i = 0;
    while (str[i])
        i++;
    return i;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
