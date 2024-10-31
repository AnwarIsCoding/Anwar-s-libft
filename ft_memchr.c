/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 02:05:46 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 02:05:46 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		i;

	i = 0;
	str = (const char *)s;
	// if (s == NULL)
	// return NULL;
	// if (c == 0)
	// 	return (NULL);
	while (i < n)
	{
		if (*(str + i) == c)
			return ((char *)(s + i));
		else
			i++;
	}
	return (NULL);
}
