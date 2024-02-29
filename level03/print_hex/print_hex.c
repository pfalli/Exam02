/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:45:04 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/28 08:45:04 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(const char *str)
{
    int i = 0;
    int num = 0;

    while(str[i] != '\0')
    {
        num = num * 10 + (str[i] - '0');
        i++;
    }
    return (num);
}

void print_hex(int num)
{
    char *str = "0123456789abcdef";

    if ( num >= 16)
        print_hex(num / 16);
    write (1, &str[num % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print_hex(atoi(argv[1])); // the loop is already inside print_hex (RECURSIVE)
    }
    write(1, "\n", 1);
    return (0);
}