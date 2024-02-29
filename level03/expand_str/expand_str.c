/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:11:37 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/27 16:11:37 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int flag = 0;

    if (argc == 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            while ((!argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (flag)
                    write (1, "   ", 3);
                write (1, &argv[1][i], 1 );
                i++;
            }
        }
    }
    write (1, "\n", 1);
}