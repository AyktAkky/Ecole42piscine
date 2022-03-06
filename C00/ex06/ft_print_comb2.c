/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:08:47 by aakkaya           #+#    #+#             */
/*   Updated: 2021/12/01 19:12:03 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	son;
	int	ilk;

	son = 0;
	ilk = 0;
	while (ilk <= 98)
	{
		son = ilk + 1;
		while (son <= 99)
		{
			ft_putchar((ilk / 10) + 48);
			ft_putchar((ilk % 10) + 48);
			write(1, " ", 1);
			ft_putchar((son / 10) + 48);
			ft_putchar((son % 10) + 48);
			son++;
			if (ilk != 98)
				write(1, ", ", 2);
		}
		ilk++;
	}
}
