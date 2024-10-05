#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}


/*
char f(unsigned int i, char character )
{
    char c;
    c = character - 32;
    return c;
}
*/


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    char *str;
    char *str1;
    str1 = (char *)s;
    if (!s)
        return NULL;
    str = malloc (ft_strlen((char *)s));
    i = 0;
    while (str1[i])
    {
        str[i] = f(i, str1[i]);
        i++;
    }
    str[i] = '\0';
    return str;
}

/*
#include <stdio.h>
int main()
{
    char const str[] = "";
    printf ("%s", ft_strmapi(str, f));
}
*/
