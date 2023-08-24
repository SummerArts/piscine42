/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:55:12 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/24 11:39:49 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_comb(int *tab, int n, int check)
{
	int	i;

	i = 0;
	if (check == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	while (i < n)
	{
		ft_putchar(tab[i] + 48);
		i++;
	}
}

void	count(int *tab, int n)
{
	int	i;
	int	z;

	i = n - 1;
	z = 9;
	while (tab[i] == z)
	{
		i -= 1;
		z -= 1;
	}
	tab[i] += 1;
	while (i < n)
	{
		tab[i + 1] = tab[i] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	tab[10];

	i = 0;
	while (i < n)
	{
			tab[i] = i;
			i++;
	}
	write_comb(tab, n, 0);
	while (tab[0] != 10 - n || tab[n - 1] != 9)
	{
		if (tab[n - 1] != 9)
			tab[n - 1] += 1;
		else
			count(tab, n);
		write_comb(tab, n, 1);
	}
}

/*#include <stdlib.h>

int main(void)
{
	ft_print_combn(2);
}*/
