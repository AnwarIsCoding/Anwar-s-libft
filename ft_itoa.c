/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-26 23:09:56 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 19:52:19 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"



int	number_of_digits(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

void	ft_strrev(char *str)
{
	size_t	i;
	size_t	j;
	char	temp;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

char	*rev_itoa(int num)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(number_of_digits(num));
	while (num > 0)
	{
		str[i] = '0' + (num % 10);
		num /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;

	str = rev_itoa(n);
	ft_strrev(str);
	return (str);
}
