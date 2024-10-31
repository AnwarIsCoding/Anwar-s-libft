<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 01:27:16 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 01:27:16 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		else
			i--;
	}
	if ((unsigned char)c == 0)
	return (char *)(s + ft_strlen(s));
	return (0);
}
=======
#include <stddef.h>
#include "work.h"

size_t ft_strlen(char *str);

char *ft_strrchr(const char *str, int c)
{
    char *str1;
    size_t i;
    str1 = (char *)str;
    i = ft_strlen(str1);
    while (i > 0)
    {
        if (str[i] == c)
        {
            return (str1 + i);
        }
        else 
            i--;
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hello world";
    printf ("%s", ft_strrchr(str, 'l'));
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
