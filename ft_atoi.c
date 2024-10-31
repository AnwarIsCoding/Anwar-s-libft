/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 02:23:02 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/24 22:05:18 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int converting(const char *str, int sign, int i)
{
	int res;

	res = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + (str[i++] - '0');
		}
		else
			return (res * sign);
	}
	return (res * sign);
}
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= -1;
			if (ft_strlen(str) >= 20)
			return 1;
		}
		i++;
	}
	if (ft_strlen(str) >= 20)
	return -1;
	return (converting(str, sign, i));
}
