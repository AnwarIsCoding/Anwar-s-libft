#include <stdlib.h>
#include "work.h"

int ft_strlen(const char *str);

char *ft_strdup(const char *str)
{
    char *str1;
    int i;
    i = 0;
    str1 = malloc(ft_strlen(str));
    while (str[i])
    {
        str1[i] = str[i];
        i++;
    }
    str1[i] = '\0';
    return str1;
}

/*
#include <stdio.h>
int main()
{
    char str[] = "hello";
    char *str1;
    str1 = ft_strdup(str);
    printf("%s\n", str1);
}
*/