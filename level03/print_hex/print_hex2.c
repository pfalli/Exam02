/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:52:32 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/28 10:52:32 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(const char *str)
{
    int res = 0;

    while (*str)
    {
        res = res * 10 + ( *str - '0');
        str++;
    }
    return(res);
}

void print_hex(int num)
{
    char *str = "0123456789abcdef";

    if (num >= 16)
        print_hex(num / 16);
    write (1, &str[num % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2);
        print_hex(atoi(argv[1]));
    write(1, "\n", 1);
    return(0);
}