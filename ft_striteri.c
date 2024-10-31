<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:13:26 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 19:57:36 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void f(unsigned int i, char *character)
{
    *character = *character - 32;
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}
=======
unsigned int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}

/*
void f(unsigned int i, char *character)
{
    *character = *character - 32;
}
*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    i = 0;
    while (s[i])
    {
        f(i, (s + i));
        i++;
    }
}

/*
#include <stdio.h>
int main()
{
    char str[] = "abc";
    ft_striteri(str, f);
    printf("%s", str);
    
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
