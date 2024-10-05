char *ft_strchr(const char *str, int c)
{
    char *str1;
    int i;
    str1 = (char *)str;
    i = 0;
    while (str[i])
    {
        if (str1[i] == c)
            return (str1 + i);
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