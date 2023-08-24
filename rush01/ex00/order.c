/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:37:17 by librilla          #+#    #+#             */
/*   Updated: 2023/08/13 00:37:28 by librilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_in_order_left(int **tab, int row, int col, int size)
{
	int	contrainte;
	int	compteur;
	int	max;
	int	i;

	contrainte = tab[row][0];
	i = 1;
	max = tab[row][i];
	compteur = 1;
	if (col != 4)
		return (1);
	while (i < size - 1)
	{
		if (max < tab[row][i + 1])
		{
			max = tab[row][i + 1];
			compteur++;
		}
		i++;
	}
	if (compteur == contrainte)
		return (1);
	else
		return (0);
}

int	row_in_order_right(int **tab, int row, int col)
{
	int	contrainte;
	int	compteur;
	int	max;
	int	i;

	contrainte = tab[row][5];
	i = 4;
	max = tab[row][i];
	compteur = 1;
	if (col != 4)
		return (1);
	while (i > 1)
	{
		if (max < tab[row][i - 1])
		{
			max = tab[row][i - 1];
			compteur++;
		}
		i--;
	}
	if (compteur == contrainte)
		return (1);
	else
		return (0);
}

int	col_up_in_order(int **tab, int row, int col, int size)
{
	int	contrainte;
	int	compteur;
	int	max;
	int	i;

	contrainte = tab[0][col];
	i = 1;
	max = tab[i][col];
	compteur = 1;
	if (row != 4)
		return (1);
	while (i < size - 1)
	{
		if (max < tab[i + 1][col])
		{
			max = tab[i + 1][col];
			compteur++;
		}
		i++;
	}
	if (compteur == contrainte)
		return (1);
	else
		return (0);
}

int	col_down_in_order(int **tab, int row, int col)
{
	int	contrainte;
	int	compteur;
	int	max;
	int	i;

	contrainte = tab[5][col];
	i = 4;
	max = tab[i][col];
	compteur = 1;
	if (row != 4)
		return (1);
	while (i > 1)
	{
		if (max < tab[i - 1][col])
		{
			max = tab[i - 1][col];
			compteur++;
		}
		i--;
	}
	if (compteur == contrainte)
		return (1);
	else
		return (0);
}
