<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 17:12:59 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/21 18:17:34 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
=======
int ft_isdigit(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else 
            return 0;
    }
    return 1;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
