#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str;
    str = (unsigned char *)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;
    int i;
    i = 0;
    str = malloc(10);
    ft_bzero(str, 10);
    while (i < 10)
    {
        printf("%d\n", str[i]);
        i++;
    }
    
}
*/