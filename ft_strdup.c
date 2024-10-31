<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 04:49:55 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 04:49:55 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc (n + 1);
	if (dst == NULL)
	return 0;
	while (s1[i] && i < n)
	{
		*(dst + i) = s1[i];
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
=======
#include <stdlib.h>
#include "work.h"

int ft_strlen(const char *str);

char *ft_strdup(const char *str)
{
    char *str1;
    int i;
    i = 0;
    str1 = malloc(ft_strlen(str));
    while (str[i])
    {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    return str1;
}

/*
#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *str1;
    str1 = ft_strdup(str);
    printf("%s\n", str1);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
