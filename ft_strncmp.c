#include <stddef.h>

 int ft_strncmp(const char *s1, const char *s2, size_t n)
 {
    size_t i;
    i = 0;
    while (i < n)
    {
        if (s1[i] == s2[i])
            i++;
        return s1[i] - s2[i];
    }
    return 0;
}
/*

#include <stdio.h>
int main()
{
    char str[]  = "hamid";
    char str1[] = "karim";
    printf ("%d", ft_strncmp(str1, str, 5));
    printf("\n %d \n %d", 'k','h');
}
*/