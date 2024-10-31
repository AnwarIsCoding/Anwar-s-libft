/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaliari <amaliari@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-28 19:04:12 by amaliari          #+#    #+#             */
/*   Updated: 2024-10-28 19:04:12 by amaliari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new = malloc (sizeof(t_list ));
    if (!new)
    return:
    new->content = "hamid";
    new->next = *lst;
    *lst = new;
}
int main()
{
    t_list **list;
    t_list next;
    next->content =