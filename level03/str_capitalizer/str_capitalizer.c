/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:42:28 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/28 15:42:28 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void capitalize (char *str)
{
    int i = 0;
    char c;

    if (str[i] >= 'a' && 'z' >= str[i])
    {
        c = str[i] - 32;
        write(1, &c, 1);
        i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <='Z')
            c = str[i] + 32;
        else if ((str[i-1] == ' ' || str[i-1] == '\t') && (str[i] >= 'a' && str[i] <= 'z'))
            c = str[i] - 32;
        else
            c = str[i];
        write (1, &c, 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    int i = 1;

    if (argc < 2)
        write (1, "\n", 1);
    else
    {
        while (i < argc)
        {
            capitalize(argv[i]);
            i++;
            write(1, "\n", 1);
        }
            
    }
    return(0);
}