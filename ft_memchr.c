<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 02:05:46 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 02:05:46 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char *)s;
	// if (s == NULL)
	// return NULL;
	// if (c == 0)
	// 	return (NULL);
	while (i < n)
	{
		if (*(str + i) == c)
			return ((char *)(s + i));
		else
			i++;
	}
	return (NULL);
}
=======
#include <stddef.h>

void *ft_memchr(void *str, int c, size_t n)
{
    char *str1;
    size_t   i;
    i = 0;
    str1 = (char *)str;
    while (i < n)
    {
        if (str1[i] == c)
            return (str + i);
        else 
            i++;
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char str[] = "he\0llo world";
    printf("%s", ft_memchr(str, 'o', 8));
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
