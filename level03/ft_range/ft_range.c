/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfalli <pfalli@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 15:28:21 by pfalli            #+#    #+#             */
/*   Updated: 2024/02/21 15:28:28 by pfalli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len = end - start;
	if (len < 0)
		len = -len;
	len = len + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	if (res == NULL)
		return (NULL);
	while (i < len)
	{
		if (start < end )
		{
			res[i] = start; 
			start++;
			i++;
		}
		else 
		{
			res[i] = start; 
			start--;
			i++;
		}
	}
	return(res);
}

int main (void)
{
	int start = 0;
	int end = 3;
	int len = end - start;
	if (len < 0)
		len = -len;
	len = len +1;
	int i = 0;
	int *res = ft_range(start, end);
	while(i < len)
	{
		printf("result: %d\n", res[i]);
		i++;
	}
}