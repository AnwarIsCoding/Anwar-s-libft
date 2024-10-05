#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const char *str;
    const char *str1;
    size_t i;
    i = 0;
    str = (const char *)s1;
    str1 = (const char *)s2;
    while (i < n)
    {
        if (str[i] == str1[i])
            i++;
        else 
            return (*(char *)(s1 + i) - *(char *)(s2 + i));
    }
    return 0;
}

/*
#include <stdio.h>
int main()
{
    char str[]  = "hamid";
    char str1[] = "karim";
    printf ("%d", ft_memcmp(str1, str, 5));
    printf("\n %d \n %d", 'k','h');
}
*/

