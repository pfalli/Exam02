/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:18:28 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/23 15:18:28 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
    int i = 0;

    if (argc == 4)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write (1, &argv[1][i], 1);
            i++;
        }
        write (1, "\n", 1);
    }
    write (1, "\n", 1);
}