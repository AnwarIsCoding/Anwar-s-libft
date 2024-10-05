#include <stddef.h>

void *ft_memchr(void *str, int c, size_t n)
{
    char *str1;
    size_t   i;
    i = 0;
    str1 = (char *)str;
    while (i < n)
    {
        if (str1[i] == c)
            return (str + i);
        else 
            i++;
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char str[] = "he\0llo world";
    printf("%s", ft_memchr(str, 'o', 8));
}
*/