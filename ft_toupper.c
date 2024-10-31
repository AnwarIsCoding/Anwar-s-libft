<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 23:59:32 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-23 23:59:32 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
=======
int ft_toupper(int c)
{
    int upper;
    upper = c - 32;
    return (upper);
}
/*
void upper(char *str)
{
    int i;
    i = 0;
    char str1[100];
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}
#include<stdio.h>
int main()
{
    char str[] = "hello";
    //char *str1;
    upper (str);
    printf("%s", str);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
