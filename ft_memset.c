#include <stddef.h>

void *ft_memset(void *str, int c, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str1 ;
    str1 = (unsigned char *)str;
    while (i < n)
    {
        str1[i] = (unsigned char)c;
        i++;
    }
    return str;
}