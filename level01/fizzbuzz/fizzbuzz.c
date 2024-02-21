/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:34:45 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/21 16:13:15 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// how to calculate multiples

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putnumber(int num)
{
	if (num > 9)
		ft_putnumber(num / 10);
	ft_putchar(num % 10 + '0');
}


int main (void)
{
	int i = 1;
	
	while (i <= 100)
	{
		if ( i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnumber(i);
		write(1, "\n", 1);
		i++;
	}
}