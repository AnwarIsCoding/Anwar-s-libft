<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 08:58:25 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-23 08:58:25 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	j;
	size_t	dest_lenght;
	size_t	src_lenght;
	if (!dest && !size)
	return ft_strlen((const char *)src);
	dest_lenght = ft_strlen((const char *)dest);
	src_lenght = ft_strlen((const char *)src);
	i = dest_lenght;
	j = 0;
	if (size == 0 || size <= dest_lenght)
	{
		return (src_lenght + size);
	}
	while ((j < size - dest_lenght - 1) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_lenght + src_lenght);
}
=======
#include <stddef.h>
#include <stdlib.h>
#include "work.h"

size_t ft_strlen(const char* str);

 size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize)
 {
    size_t i;
    size_t j;
    if(!dsize || !src)
        return (ft_strlen(dst));
    if(!dst)
        return (dsize);
    i = ft_strlen(dst);
    j = 0;
     while (j < dsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
        return (ft_strlen(dst));

 }
/*
#include<stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
    printf("%d\n",ft_strlcat(argv[1], argv[2], ft_strlen(argv[2])));
    //printf("%d\n",strlcat(argv[1], argv[2], 4));
    printf("%d\n", ft_strlen(argv[1]));
    printf ("%s", argv[1]);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
