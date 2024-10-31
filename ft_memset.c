<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 08:43:37 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-23 08:43:37 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;
	str = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
=======
#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str1 ;
    str1 = (unsigned char *)str;
    while (i < n)
    {
        str1[i] = (unsigned char)c;
        i++;
    }
    return str;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
