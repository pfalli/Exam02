/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:56:54 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/26 11:56:54 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t largelength(char *str)
{
    int i = 0;
    int len = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            i++;
        }
        i++;
    }
    i++;
    return (i + 1); 
}



int main (int argc, char **argv)
{
    int i = 0;
    size_t len = largelength(argv[1]);
    char *newstr = (char *)malloc (len);

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z' )
            {
                if ( i != 0)
                {
                    *newstr++ = '_';
                    
                }
                *newstr++ = argv[1][i] + 32;
            }
            else
               *newstr++ = argv[1][i]; 
            i++;
        }
        *newstr = '\0';
        write (1, newstr - len, len);
    }
    return(0);
}
