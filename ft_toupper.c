int ft_toupper(int c)
{
    int upper;
    upper = c - 32;
    return (upper);
}
/*
void upper(char *str)
{
    int i;
    i = 0;
    char str1[100];
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
}
#include<stdio.h>
int main()
{
    char str[] = "hello";
    //char *str1;
    upper (str);
    printf("%s", str);
}
*/