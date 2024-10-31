<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 09:10:38 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-23 09:10:38 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	len_src = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (len_src);
	while (--dstsize && src[i])
	{
		dst[i] = (char)src[i];
		i++;
	}
	dst[i] = '\0';
	return (len_src);
}
=======
#include <stddef.h>
#include <stdlib.h>
#include "work.h"

size_t ft_strlen(const char *str);

size_t ft_strlcpy(char *restrict dest, const char *restrict src, size_t dsize)
{
    //dest = malloc(ft_strlen(src));
    size_t i;
    i = 0;
    if (!dsize)
    {
        dest[i] = '\0';
        return (ft_strlen(dest));
    }
    while (src[i] && i < dsize)
    {
        dest[i] = src[i];
        i++;
    }
     dest[i] = '\0'; 
    if (dsize < ft_strlen(src))
        return (ft_strlen(dest)); 
    return (ft_strlen(src));
}
/*
#include <stdio.h> 
#include <string.h>
#include "have_strlcpy.h"
int main()
{
    char src[] = "hello world";
    char *dest = malloc (strlen(src));
    printf("%d\n", ft_strlen(dest));
    printf("%lld\n", ft_strlcpy(dest, src,9));
    printf("%s\n", dest);
    printf("%lld\n", strlcpy(dest, src, 9));
    printf("%s\n", dest);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
