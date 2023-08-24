/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librilla <librilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:37:43 by librilla          #+#    #+#             */
/*   Updated: 2023/08/13 17:16:31 by librilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_length(char *tab)
{
	int	c;

	c = 0;
	while (tab[c])
	{
		c++;
	}
	return (c);
}

void	ft_printline(int *chain, int size)
{
	int	c;

	c = 1;
	while (c < size - 1)
	{
		ft_putchar(chain[c] + '0');
		if (c < size - 2)
			ft_putchar(' ');
		else
			ft_putchar('\n');
		c++;
	}
}

void	ft_put_table(int **tab, int size)
{
	int	i;

	i = 1;
	while (i < size - 1)
	{
		ft_printline(tab[i], size);
		i++;
	}
}

void	logs(void)
{
	write(1, "Error\n", 6);
}
