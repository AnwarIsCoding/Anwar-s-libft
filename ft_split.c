/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 02:09:38 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-28 02:09:38 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

int	charcmp(char character, char charset)
{
	if (character == charset)
		return (1);
	else
		return (0);
}

char	**lets_split(char *str, char **splited_str, int i, char charset)
{
	int	k;
	int	j;

	j = 0;
	while (str[i])
	{
		splited_str[j] = malloc (ft_strlen(str));
		k = 0;
		while (!(charcmp(str[i], charset)))
		{
			splited_str[j][k] = str[i];
			k++;
			i++;
		}
		if (charcmp(str[i], charset))
		{
			while (charcmp(str[i], charset))
				i++;
			splited_str[j][k] = '\0';
			j++;
		}
	}
	splited_str[j] = NULL;
	return (splited_str);
}

char	**ft_split(char *str, char charset)
{
	char	**splited_str;
	int		i;
	int		lenght;

	lenght = ft_strlen(str);
	splited_str = malloc (lenght * sizeof(char *));
	if (splited_str == NULL)
		return (NULL);
	i = 0;
	while (charcmp(str[i], charset))
		i++;
	splited_str = lets_split(str, splited_str, i, charset);
	return (splited_str);
}

// #include <stdio.h>
// int main()
// {
//     char **str;
//     char str1[] = ",,,,,,,,
//     ,,,,,,,,,,,,,I,,,
//     ,,,,,,,,,,,,,,,,,,,,,,,
//     ,,,,love,,,,,,,,,,,
//     ,,,,,,,,,,,,,,,,,,,,,choklate,,,,,,,,,,,,,,,,,,,,,hamid,";
//     char str2 = ',';
//     int i;
//     i = 0;
//     str = ft_split(str1, str2);
//     while (str[i])
//     {
//         printf("%s\n", str[i]);
//         i++;
//     }
// }
