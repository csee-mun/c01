/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:22:46 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/25 17:18:32 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
/*
int	main(void)
{
	int	a;
	int	*nbr;

	a = 28;
	nbr = &a;
	ft_ft(nbr);
	printf("%d", a);
	return (0);
}
*/
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
