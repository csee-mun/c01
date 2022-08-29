/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:40:16 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/25 18:11:06 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	*a;
	int	*b;
	int	nbr1;
	int	nbr2;

	nbr1 = 28;
	nbr2 = 42;
	a = &nbr1;
	b = &nbr2;
	ft_swap(a, b);
	printf("%d", nbr1);
	printf("%d", nbr2);
	return (0);
}

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
