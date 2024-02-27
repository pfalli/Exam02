/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:43:18 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/22 15:31:50 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// non ended

int main(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			int x = 0;
			while ( x <= (str[i] - 96))
			{
				write(1, &str[i], 1);
				x++;
			}
		}
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	str[i] = '\0';
	return(0);
}
