#include <stddef.h>
#include "work.h"

size_t ft_strlen(char *str);

char *ft_strrchr(const char *str, int c)
{
    char *str1;
    size_t i;
    str1 = (char *)str;
    i = ft_strlen(str1);
    while (i > 0)
    {
        if (str[i] == c)
        {
            return (str1 + i);
        }
        else 
            i--;
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    char str[] = "hello world";
    printf ("%s", ft_strrchr(str, 'l'));
}
*/