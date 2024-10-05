#include <stddef.h>
#include "work.h"

size_t ft_strlen(const char *str);

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t j;
    if(!little[0])
        return (char *)big;
    if (len < ft_strlen(little) || len > ft_strlen(big))
        return 0;
    i = 0;
    j = 0;
    while (big[i])
    {
        j = 0;
        if(big[i] == little[j])
        {
            while (little[j])
            {
                if (big[i] == little[j])
                {
                    j++;
                    i++;
                }
                else 
                 break;
            }
            if (j == ft_strlen(little))
                return (char *)(big + i - j);
        }
        i++;
    }
    return 0;
}

/*
#include <stdio.h>
int main(){
    char str1[] = "hello world";
    char str2[] =  "world";
    printf("%s", ft_strnstr(str1, str2, 5));
    printf("\n%d", ft_strlen(str2));
}
*/