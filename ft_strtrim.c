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

