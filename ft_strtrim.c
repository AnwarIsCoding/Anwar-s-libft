/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-27 16:20:45 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/27 17:28:32 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
//static int str_kolo_fih_gha_hadchar(char *str, char set)
char *str_composement(char *str)
{
	char *composement;
	composement = malloc (ft_strlen(str));
	int i;
	int j;
	int k;
	k = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if(str[i] == str[j])
			{
				composement[k] = str[i];
				k++;
				break;
			}

		}
		i++;
	}
	return composement;
}

static int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		else
			i++;
	}
	return (0);
}

int	is_in(char *str, char is_in)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == is_in)
			return (1);
		else
			i++;
	}
	return (0);
}

size_t	end_trim(char *str, char *set)
{
	int	i;

	i = ft_strlen(str) - 1;
	while (is_in(set, str[i]) && i >= 0)
		i--;
	return (i);
}

int	start_trim(char *str, char *set)
{
	int	i;

	i = 0;
	while (is_in(set, str[i]) && (size_t)i < ft_strlen(str))
		i++;
	return (i);
}

char	*ft_strtrim(char const *str, char const *set)
{
	if (str == NULL)
		return (NULL);
	else if (set == NULL)
		return ((char *)str);
	else if (str == NULL && set == NULL)
		return (NULL);
	else if (!ft_strcmp((char *)str, (char *)set))
		return (NULL);
	else
		return (ft_substr(str, start_trim((char *)str, (char *)set),
				end_trim((char *)str, (char *)set)));
}
#include <stdio.h>
int main()
{
	char *str;
	char *srt = "**********ggggggg**********";
	str = str_composement(srt);
	printf ("%s\n", str);
}