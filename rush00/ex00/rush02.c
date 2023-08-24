/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 11:00:41 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/06 19:10:58 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	write_char(int x, int y, int i, int j)
{
	if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
	{
		if (i == 0 && j == 0 || i == x - 1 && j == 0)
			ft_putchar('A');
		else if (i == x - 1 && j == y - 1 || j == y - 1 && i == 0)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else
		write(1, " ", 1);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			write_char(x, y, i, j);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
