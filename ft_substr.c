#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t  i;
    size_t  j;
    i = start;
    j = 0;
    str = malloc((int)len);
    while (i <= len)
    {
        str[j] = s[i];
        j++;
        i++;
    }
    str[j] = '\0';
    return str;
}