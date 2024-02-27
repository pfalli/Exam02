/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 17:52:53 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/26 17:52:53 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int turn(char *str, char c, int len)
{
    int i = 0;

    if (str[len] == c)
            return (1);
    i++;
    
    return (0);
}

int main (int argc, char **argv)
{
    int i = 0;

    if (argc == 3)
    {
        while (argv[1][i] >= 33 && argv[1][i] <= 126)
        {
            if ((turn(argv[2][i], argv[1][i]), i) == 0)
                write (1, &argv[1][i], 1);
        }
    }
    write (1, "\n", 1);
}


if (argv[1][i] == argv[2][j])
     i++;
else if (argv[1][i] != argv[2][j])
    write (1, &argv[1])
