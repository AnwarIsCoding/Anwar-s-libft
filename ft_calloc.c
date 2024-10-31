<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-24 04:43:23 by amaliari          #+#    #+#             */
/*   Updated: 2024/10/24 22:08:03 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
	return NULL;
	ft_bzero (ptr, count * size);
	return (ptr);
}
=======
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
>>>>>>> f74c812e685c9c9806d3f4cacbfbe8af4f0250b1
