<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 00:21:50 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 00:21:50 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while ((unsigned char)s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		else
			i++;
	}
	if ((unsigned char)c == 0)
	return (char *)(s + i);
	return (0);
}
 
=======
char *ft_strchr(const char *str, int c)
{
    char *str1;
    int i;
    str1 = (char *)str;
    i = 0;
    while (str[i])
    {
        if (str1[i] == c)
            return (str1 + i);
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
