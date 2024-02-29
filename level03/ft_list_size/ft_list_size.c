/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:18:55 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/29 11:18:55 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_list.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *current = begin_list;

    while (current != NULL)
    {
        i++;
        current = current->next
    }
    return(i);
}