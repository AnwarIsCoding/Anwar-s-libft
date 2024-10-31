/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 02:58:23 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 02:58:23 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	 str1 = (unsigned char *)s1;
		str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
		i++;
		else 
		return str1[i] - str2[i];
		}
	return 0;
}