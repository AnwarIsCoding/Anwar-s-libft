<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 03:31:48 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 03:31:48 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	i = 0;
	if (haystack == NULL)
	return NULL;
	while (haystack[i])
	{
		j = i + 1;
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && i + j <= len)
			{
				i++;
				j++;
			}
		}
		i++;
		if (j == ft_strlen(needle))
			break ;
	}
	if (j == ft_strlen((char *)needle))
		return ((char *)(haystack - i + j));
	return (NULL);
}
=======
#include <stddef.h>
#include "work.h"

size_t ft_strlen(const char *str);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    if(!little[0])
        return (char *)big;
    if (len < ft_strlen(little) || len > ft_strlen(big))
        return 0;
    i = 0;
    j = 0;
    while (big[i])
    {
        j = 0;
        if(big[i] == little[j])
        {
            while (little[j])
            {
                if (big[i] == little[j])
                {
                    j++;
                    i++;
                }
                else 
                 break;
            }
            if (j == ft_strlen(little))
                return (char *)(big + i - j);
        }
        i++;
    }
    return 0;
}

/*
#include <stdio.h>
int main(){
    char str1[] = "hello world";
    char str2[] =  "world";
    printf("%s", ft_strnstr(str1, str2, 5));
    printf("\n%d", ft_strlen(str2));
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
