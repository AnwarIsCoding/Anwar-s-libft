<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:30:11 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 20:06:19 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


// should be fixed 
void	ft_putnbr_fd(int c, int fd)
{
	char	n;

	// protection 
	// if (fd < 0) {
	// 	ft_putstr("bad file descirpter  !");
	// 	return ;
	// }
	if (fd < 0)
		return;
	if (c < 0)
	{
		write (fd, "-", 1);
		if (c == -2147483648)
		{
			write (fd, "2147483648", 10);
			return;
		}
		c *= -1;
	}
	if (c > 9)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	else 
	{
		n = c + '0';
		write (fd, &n, 1);
	}		
}
=======
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;
    if (n < 0)
    {
        if (n == -2147483648)
            write(fd, "-2147483648", 11);
        else 
        {
            n *= -1;
            write(1, "-", 1);
        }
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n % 10, fd);
        ft_putnbr_fd(n / 10, fd);
    }
    else
    {
    c = n + '0';
    write (fd, &c, 1);
    }
}
/*
#include <stdio.h>
#include <limits.h>
int main()
{
    //printf("%d\n", INT_MIN);
    ft_putnbr_fd(0, 1);
}
*/
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
