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
