/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 21:05:24 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/22 21:05:24 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = (argv[1][i]) - 32;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = (argv[1][i]) + 32;
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
}