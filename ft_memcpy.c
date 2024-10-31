<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 19:08:51 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/22 14:15:21 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			i;

	i = 0;
	// if (dst == NULL || (dst == NULL && src == NULL))
	// 	return NULL;
	if (dst == NULL && src == NULL)
	return NULL;
	str_dst = (unsigned char *)dst;
	str_src = (unsigned char *)src;
	while (i < n)
	{
		str_dst[i] = str_src[i];
		i++;
	}
	return (dst);
}
=======
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
     const unsigned char *str = src ;
     unsigned char *str1 = dest;
     size_t i;
     i = 0;
     while (i < n)
     {
        str1[i] = str[i];
        i++;
     }
     return dest;
}

/*
#include <stdio.h>
int main()
{
    const char str[] = "hamid";
    char *str1;
    str1 = calloc(ft_strlen(str), 1);
    printf("%d\n", ft_strlen(str1));
    ft_memcpy(str1, str, 3);
    printf("%d\n", ft_strlen(str1));
    printf ("%s\n", str1); 
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
