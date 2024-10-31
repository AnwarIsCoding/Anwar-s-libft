<<<<<<< HEAD
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
=======
#include <stdlib.h>
#include "work.h"

size_t ft_strlen(char const *str);
char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    int i;
    int j;
    int k;
    if (!s1)
        return 0;
    str = malloc((int)ft_strlen(s1));
    i = 0;
    j = 0;
    k = 0;
    while (s1[i])
    {
        if (s1[i] == set[k])
        {
            i++;
            k++;
        }
        else 
        {
            str[j] = s1[i];
            j++;
            i++;
        }
    }
    str[j] = '\0';
    return str;
}
/*
#include <stdio.h>
int main()
{
    const char str[] = "hello world";
    const char str2[] = "lll";
    char *str3;
    str3 = ft_strtrim(str, str2);
    printf ("%s", str3);
}
*/

>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
