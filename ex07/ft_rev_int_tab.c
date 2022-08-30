/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:31:03 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/30 14:06:56 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < (size / 2))
	{
		y = tab [x];
		tab [x] = tab [size - 1 - x];
		tab [size - 1 - x] = y;
		x++;
	}
}
/*
int	main(void)
{
int	tab[] = {1, 2, 3, 4, 5};
int	size = 6;

ft_rev_int_tab(tab, size);
printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
return (0) ;
}*/
