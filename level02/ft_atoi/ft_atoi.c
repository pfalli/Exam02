/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:31:15 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/23 16:31:15 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
    int result = 0;
    int neg = 1;

    while (*str && (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        neg = -1;
    if (*str == '-' || *str == '+')
        str++;
    while ((*str >= '0' && *str <= '9'))
    {
        result = result * 10 + ( *str - '0');
        str++;
    }
    return (neg * result);
}

int main (void)
{
    int i = ft_atoi("1234");
    printf("%i", i);
    return(0);
}