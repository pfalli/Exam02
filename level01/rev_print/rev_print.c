/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:31:24 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/22 15:48:35 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main (int argc, char **str)
{
	int i = 0;
	int j = 0;
	
	if (argc == 2)
	{
		while (str[1][i] != '\0')
			i++;
		while (i >= j)
		{
			write(1, &str[1][i], 1);
			i--;
		}
	}
	write(1, "\n", 1);
}