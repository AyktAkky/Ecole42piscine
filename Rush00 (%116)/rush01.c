/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mterzi <mterzi@student.42kocaeli.com.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 15:40:43 by mterzi            #+#    #+#             */
/*   Updated: 2021/11/28 18:14:15 by mterzi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_print(int len, char baslangic_char, char orta_char, char son_char)
{
	int	sutun_sayaci;

	sutun_sayaci = 1;
	while (sutun_sayaci <= len)
	{
		if (sutun_sayaci == 1)
			ft_putchar(baslangic_char);
		else if (sutun_sayaci == len)
			ft_putchar(son_char);
		else
			ft_putchar(orta_char);
		sutun_sayaci++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	satir_sayaci;

	satir_sayaci = 1;
	if (x >= 1 && y >= 1)
	{
		while (satir_sayaci <= y)
		{
			if (satir_sayaci == 1)
				ft_print(x, '/', '*', '\\');
			else if (satir_sayaci == y)
				ft_print(x, '\\', '*', '/');
			else
				ft_print(x, '*', ' ', '*');
			satir_sayaci++;
		}
	}
}
