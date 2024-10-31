<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-21 17:18:41 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/21 18:21:11 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	i;

	i = 0;
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}
=======
int ft_isalnum(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else 
            return 0;
    }
    return 1;
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
