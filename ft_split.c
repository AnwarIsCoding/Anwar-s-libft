#include <stdlib.h>
#include <stddef.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    while (str[i])
        i++;
    return i;
}
int is_thechar_in(char character, char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] == character)
            return 1;
        i++;
    }
    return 0;
}

char **ft_split(char *str, char *charset)
{
    char **splited_str;
    int i;
    int j;
    int k;
    splited_str = malloc (ft_strlen(str) * sizeof(char *));
    i = 0;
    j = 0;
    k = 0;
    while (is_thechar_in(str[i], charset))
     i++;
    while (str[i])
    {
        splited_str[j] = malloc(ft_strlen(str));
        k = 0;
        while (str[i] && (!(is_thechar_in(str[i], charset))))
        {
            splited_str[j][k] = str[i];
            i++;
            k++;
        }
        splited_str[j][k] = '\0';
        j++;
     while (is_thechar_in(str[i], charset))
        i++;
    }
    splited_str[j] = NULL;
    return splited_str;
}

#include <stdio.h>
int main()
{
    char **str;
    char str1[] = "I, love, choklate";
    char str2[] = ", ";
    int i;
    i = 0;
    str = ft_split(str1, str2);
    while (str[i])
    {
        printf("%s\n", str[i]);
        i++;
    }
}
