/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:22:32 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/25 21:19:17 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	*pointer1;
	int	**pointer2;
	int	***pointer3;
	int	****pointer4;
	int	*****pointer5;
	int	******pointer6;
	int	*******pointer7;
	int	********pointer8;
	int	*********pointer9;
	int	a;

	a = 28;
	printf("%d", a);
	pointer1 = &a;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	ft_ultimate_ft(pointer9);
	printf("%d", a);
	return (0);
}

void	ft_ultimate_ft(int *********nbr)
{	
	*********nbr = 42;
}
