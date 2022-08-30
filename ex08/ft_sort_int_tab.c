/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:40:42 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/30 14:03:34 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	while (size >= 0)
	{	
		x = 0;
		while (x < size -1)
		{
			if (tab[x] > tab[x +1])
			{
				y = tab [x];
				tab [x] = tab [x + 1];
				tab [x +1] = y;
			}
			x++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	tab[] = {3, 5, 2, 8, 6};
	int size = 5;	
	
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}*/
