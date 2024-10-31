/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 04:49:55 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-24 04:49:55 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1, size_t n)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc (n + 1);
	if (dst == NULL)
	return 0;
	while (s1[i] && i < n)
	{
		*(dst + i) = s1[i];
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}
