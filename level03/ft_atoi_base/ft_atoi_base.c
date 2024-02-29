/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:43:15 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/29 11:43:15 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int value(char c) {
    if (c >= '0' && c <= '9')
        return (int)c - '0';
    else
        return (int)toupper(c) - 'A' + 10;
}

int ft_atoi_base(const char *str, int str_base) {
    if (str_base < 2 || str_base > 16)
        return 0;

    int result = 0;
    int sign = 1;
    int i = 0;

    if (str[0] == '-') {
        sign = -1;
        i++;
    }

    for (; str[i] != '\0'; i++)
        result = (result * str_base) + value(str[i]);

    return sign * result;
}

int main() {
    const char *str = "12fdb3";
    int base = 16;
    printf("Decimal equivalent of %s in base %d: %d\n", str, base, ft_atoi_base(str, base));
    return 0;
}