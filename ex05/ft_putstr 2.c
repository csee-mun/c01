/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csee-mun <csee-mun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 17:11:19 by csee-mun          #+#    #+#             */
/*   Updated: 2022/08/29 17:33:09 by csee-mun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, &(*str), 1);
		str++;
	}
}
/*
void	ft_putstr(char *str);

int	main(void)
{
	char *str;
	char my_string[] = " Hello World";

	str=my_string;
	ft_putstr(str);
	printf("%c\n", my_string[0]);
	printf("%c", my_string[7]);
	return (0);
}
*/
