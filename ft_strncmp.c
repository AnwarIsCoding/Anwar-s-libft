<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 01:46:40 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 01:46:40 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"
#include <stdio.h>
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char *str1;
	unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (ft_strlen((const char *)str1) == 0)
	{
		if (ft_strlen((const char *)str2) == 0)
			return 0;
		return -1;
	}
	while (i < n && str1[i])
		{
		if (str1[i] > str2[i])
		return 1;
		else if (str1[i]< str2[i])
		return -1;
		i++;
		}
	return 0;
}
=======
#include <stddef.h>

 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    size_t i;
    i = 0;
    while (i < n)
    {
        if (s1[i] == s2[i])
            i++;
        return s1[i] - s2[i];
    }
    return 0;
}
/*

#include <stdio.h>
int main()
{
    char str[]  = "hamid";
    char str1[] = "karim";
    printf ("%d", ft_strncmp(str1, str, 5));
    printf("\n %d \n %d", 'k','h');
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
