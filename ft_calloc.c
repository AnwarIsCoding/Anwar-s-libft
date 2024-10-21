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
