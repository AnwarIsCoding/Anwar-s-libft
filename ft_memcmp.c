<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 02:58:23 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 02:58:23 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	 str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
		i++;
		else 
		return str1[i] - str2[i];
		}
	return 0;
}
=======
#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str;
    const char *str1;
    size_t i;
    i = 0;
    str = (const char *)s1;
    str1 = (const char *)s2;
    while (i < n)
    {
        if (str[i] == str1[i])
            i++;
        else 
            return (*(char *)(s1 + i) - *(char *)(s2 + i));
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char str[]  = "hamid";
    char str1[] = "karim";
    printf ("%d", ft_memcmp(str1, str, 5));
    printf("\n %d \n %d", 'k','h');
}
*/

>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
