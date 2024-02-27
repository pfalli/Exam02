/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:10:07 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/22 10:16:27 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

int main(void)
{
	int a = 55;
	int b = 66;
	ft_swap(&a, &b);
	printf("a = %d mentre b = %d", a, b);
}