/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:12:49 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/25 21:36:14 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#included <stdio.h>
#included <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{	
	int	a;
	int	b;

	a = 11
	b = 5
	printf("a = %d, b = %d\n", a, b );
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d, b = %d\n", a, b );
	return (0);
}

void ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	temp = *a
	*a = *a/*b;
	*b = temp % *b;
}
