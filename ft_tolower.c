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

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
=======
int ft_tolower(int c)
{
    int lower;
    lower = c + 32;
    return (lower); 
}
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
