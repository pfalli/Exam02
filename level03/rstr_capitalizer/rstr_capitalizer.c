/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:13:18 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/27 16:13:18 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void capitalize ( char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str += 32;
        if ((str[i+1] == 32 ||str[i+1] == '\t' ||str[i+1] == '\0') && (str[i] >= 'a' && str[i] <= 'z'))
            str[i] = str[i] - 32;
        write( 1, &str[i++], 1);
    }
}

int main(int argc, char**argv)
{
    int j = 1;

    if (argc < 2)
        write (1, "\n", 1);
    else
    {
        while(j < argc)
        {
            capitalize(argv[j]);
            write(1, "\n", 1);
            j++;
        }
    }

}