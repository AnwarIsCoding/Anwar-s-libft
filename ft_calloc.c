#include <stdlib.h>
#include <stddef.h>
#include "work.h"

void ft_bzero(void *s, size_t n);
void *ft_calloc(size_t data_size, size_t num_elements)
{
    void *array;
    array = malloc(data_size * num_elements);
    ft_bzero(array, data_size * num_elements);
    return array;
}

#include <stdio.h>
int main()
{
   char *str = malloc(10);
   ft_bzero(str, 10);
   int i;
   i = 0;
   while(i < 10)
   {
     printf("%d\n",str[i]);
     i++;
   }
}
