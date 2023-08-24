/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librilla <librilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:36:58 by librilla          #+#    #+#             */
/*   Updated: 2023/08/13 17:21:40 by librilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		row_in_order_left(int **tab, int row, int col, int size);
int		row_in_order_right(int **tab, int row, int col);
int		col_up_in_order(int **tab, int row, int col, int size);
int		col_down_in_order(int **tab, int row, int col);
void	fill_table(char **argv, int **tab);
int		free_table(int **tab, int size);
int		ft_error(char *str);
int		resolve_game(int **tab, int row, int col, int size);
void	resolve_and_error(int **tab, int number, int number1, int size);

int	unique_in_row(int **tab, int row, int col)
{
	int	i;

	i = 1;
	while (i < col)
	{
		if (tab[row][col] == tab[row][i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	unique_in_col(int **tab, int row, int col)
{
	int	i;

	i = 1;
	while (i < row)
	{
		if (tab[row][col] == tab[i][col])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_ok(int **tab, int row, int col, int size)
{
	if (!(unique_in_row(tab, row, col) && unique_in_col(tab, row, col)
			&& row_in_order_left(tab, row, col, size) && row_in_order_right(tab,
				row, col) && col_down_in_order(tab, row, col)
			&& col_up_in_order(tab, row, col, size)))
		return (0);
	return (1);
}

int	resolve_game(int **tab, int row, int col, int size)
{
	int	number;
	int	ret;

	ret = 0;
	number = 1;
	if (row == size - 1)
		return (1);
	else
	{
		while (number < size - 1)
		{
			tab[row][col] = number;
			if (is_ok(tab, row, col, size))
			{
				if (col == size - 2)
					ret = resolve_game(tab, row + 1, 1, size);
				else
					ret = resolve_game(tab, row, col + 1, size);
				if (ret == 1)
					break ;
			}
			number++;
		}
	}
	return (ret);
}

void	end(char **argv, int **tab, int size)
{
	fill_table(argv, tab);
	if (ft_error(argv[1]))
		resolve_and_error(tab, 1, 1, size);
	free_table(tab, size);
}
