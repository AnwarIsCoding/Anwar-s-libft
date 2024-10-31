<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:27:25 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 20:03:39 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (fd < 0)
	return;
	ft_putstr_fd(s, fd);
	write (fd, "\n", 1);
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
    write (fd, "\n", 1);
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
