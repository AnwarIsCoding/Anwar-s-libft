/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-23 08:58:25 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-23 08:58:25 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t	i;
	size_t	j;
	size_t	dest_lenght;
	size_t	src_lenght;
	if (!dest && !size)
	return ft_strlen((const char *)src);
	dest_lenght = ft_strlen((const char *)dest);
	src_lenght = ft_strlen((const char *)src);
	i = dest_lenght;
	j = 0;
	if (size == 0 || size <= dest_lenght)
	{
		return (src_lenght + size);
	}
	while ((j < size - dest_lenght - 1) && (src[j] != '\0'))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_lenght + src_lenght);
}
