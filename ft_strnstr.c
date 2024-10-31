/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 03:31:48 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 03:31:48 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	i = 0;
	if (haystack == NULL)
	return NULL;
	while (haystack[i])
	{
		j = i + 1;
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && i + j <= len)
			{
				i++;
				j++;
			}
		}
		i++;
		if (j == ft_strlen(needle))
			break ;
	}
	if (j == ft_strlen((char *)needle))
		return ((char *)(haystack - i + j));
	return (NULL);
}
