<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 15:11:45 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 16:55:55 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include "libft.h"

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char *str;
// 	size_t	j;
// 	size_t	i;
	
// 	i = 0;
// 	if (s == NULL)
// 	return NULL;
// 	j = ft_strlen(s);
// 	if (start >= j || len == 0)
// 	{
// 		str = malloc (1);
// 		str[0] = '\0';
// 		return str;
// 	}
// 	str = malloc (len + 1);
// 	while (i < len && start < j)
// 	{
// 		str[i] = (char)s[start];
// 		start++;
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }




/* ai version must be deleted */
char *ft_substr(const char *s, unsigned int start, size_t len) {
    char *str;
    size_t i, j;

    if (s == NULL)
        return NULL;

    j = ft_strlen(s);

    if (start >= j) {
        str = malloc(1);
        if (str) str[0] = '\0';
        return str;
    }

    if (len > j - start)
        len = j - start;

    str = malloc(len + 1);
    if (str == NULL)
        return NULL;

    for (i = 0; i < len && s[start + i]; i++) {
        str[i] = s[start + i];
    }
    str[i] = '\0';

    return str;
}
=======
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t  i;
    size_t  j;
    i = start;
    j = 0;
    str = malloc((int)len);
    while (i <= len)
    {
        str[j] = s[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return str;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
