unsigned int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}

/*
void f(unsigned int i, char *character)
{
    *character = *character - 32;
}
*/

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;
    i = 0;
    while (s[i])
    {
        f(i, (s + i));
        i++;
    }
}

/*
#include <stdio.h>
int main()
{
    char str[] = "abc";
    ft_striteri(str, f);
    printf("%s", str);
    
}
*/