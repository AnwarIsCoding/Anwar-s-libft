#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
     const unsigned char *str = src ;
     unsigned char *str1 = dest;
     size_t i;
     i = 0;
     while (i < n)
     {
        str1[i] = str[i];
        i++;
     }
     return dest;
}

/*
#include <stdio.h>
int main()
{
    const char str[] = "hamid";
    char *str1;
    str1 = calloc(ft_strlen(str), 1);
    printf("%d\n", ft_strlen(str1));
    ft_memcpy(str1, str, 3);
    printf("%d\n", ft_strlen(str1));
    printf ("%s\n", str1); 
}
*/