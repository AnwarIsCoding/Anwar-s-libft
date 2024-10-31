<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:27:25 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 20:02:26 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

// protection fd 
	if (fd < 0)
		return ;	
	i = 0;
	if (s == NULL)
	return;
	while (s[i])
	{
		write (fd, (s + i), 1);
		i++;
	}
}
=======
#include <unistd.h>

void ft_putstr_fd(char *str, int fd)
{
    int i;
    i = 0;
    while (str[i])
    {
        write(fd, str + i, 1);
        i++;
    }
}
/*
#include <stdio.h>
int main()
{
    FILE* ptr;
    ptr = fopen("test.txt", "w");
    char str[] = "anwar";
    ft_putstr_fd(str, 3);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
