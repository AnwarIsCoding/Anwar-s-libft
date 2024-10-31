/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-25 15:33:31 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 16:56:29 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str_res;

	i = ft_strlen ((char *)s1);
	str_res = malloc (i + ft_strlen(s2));
	str_res = ft_strdup(s1, i);
	j = 0;
	while (s2[j])
	{
		str_res[i + j] = s2[j];
		j++;
	}
	str_res[i + j] = '\0';
	return (str_res);
}
