<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 15:33:31 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 16:56:29 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str_res;

	i = ft_strlen ((char *)s1);
	str_res = malloc (i + ft_strlen(s2));
	str_res = ft_strdup(s1, i);
	j = 0;
	while (s2[j])
	{
		str_res[i + j] = s2[j];
		j++;
	}
	str_res[i + j] = '\0';
	return (str_res);
}
=======
#include <stdlib.h>
#include <stddef.h>
#include "work.h"

size_t ft_strlen(char const *str);

char *ft_strcpy(char const *str1, char *str2)
{
    int i;
    i = 0;
    while (str1[i])
    {
        str2[i] = str1[i];
        i++;
    }
    return str2;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;
    str = malloc((int)ft_strlen(s1) + (int)ft_strlen(s2));
    j = 0;
    i = ft_strlen(s1);
    str = ft_strcpy(s1, str);
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return str;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
