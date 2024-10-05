#include <stdlib.h>
#include <stddef.h>
#include "work.h"

size_t ft_strlen(char const *str);

char *ft_strcpy(char const *str1, char *str2)
{
    int i;
    i = 0;
    while (str1[i])
    {
        str2[i] = str1[i];
        i++;
    }
    return str2;
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;
    str = malloc((int)ft_strlen(s1) + (int)ft_strlen(s2));
    j = 0;
    i = ft_strlen(s1);
    str = ft_strcpy(s1, str);
    while (s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return str;
}