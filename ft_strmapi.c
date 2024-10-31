/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:22:44 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 19:56:19 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"


/*
char f(unsigned int i, char character )
{
    char c;
    c = character - 32;
    return c;
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*str1;

	str1 = (char *)s;
	if (!s)
		return (NULL);
	str = malloc (ft_strlen(s));
	i = 0;
	while (str1[i])
	{
		str[i] = f(i, str1[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
