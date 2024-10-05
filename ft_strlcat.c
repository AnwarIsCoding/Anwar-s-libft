#include <stddef.h>
#include <stdlib.h>
#include "work.h"

size_t ft_strlen(const char* str);

 size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize)
 {
    size_t i;
    size_t j;
    if(!dsize || !src)
        return (ft_strlen(dst));
    if(!dst)
        return (dsize);
    i = ft_strlen(dst);
    j = 0;
     while (j < dsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
        return (ft_strlen(dst));

 }
/*
#include<stdio.h>
#include <string.h>

int main(int argc, char ** argv)
{
    printf("%d\n",ft_strlcat(argv[1], argv[2], ft_strlen(argv[2])));
    //printf("%d\n",strlcat(argv[1], argv[2], 4));
    printf("%d\n", ft_strlen(argv[1]));
    printf ("%s", argv[1]);
}
*/