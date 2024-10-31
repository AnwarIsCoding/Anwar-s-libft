#include <unistd.h>
#include <stdio.h>
#include <libc.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"
int main()
{
// Example usage:
// const char *haystack = "Hello World";
// const char *needle = "World";
// size_t len = 11;
// char *result = ft_strnstr(haystack, needle, len);
// char *result2 = strnstr(haystack, needle, len);
// printf("%s\n", result);
// printf("%s\n", result2);
    char *str;
    str = ft_substr(NULL, 0, 0);
    //char *str1;
   // str1 = substr("hamid", 2, 5);
    printf("%s\n", str);
}