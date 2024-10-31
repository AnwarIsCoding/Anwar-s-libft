<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 16:13:29 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/21 20:00:56 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
=======
#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str;
    str = (unsigned char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int i;
    i = 0;
    str = malloc(10);
    ft_bzero(str, 10);
    while (i < 10)
    {
        printf("%d\n", str[i]);
        i++;
    }
    
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
