/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librilla <librilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:36:16 by librilla          #+#    #+#             */
/*   Updated: 2023/08/13 17:19:38 by librilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_error(char *str);
void	ft_put_table(int **tab, int size);
int		resolve_game(int **tab, int row, int col, int size);
void	logs(void);
void	end(char **argv, int **tab, int size);

void	fill_table(char **argv, int **tab)
{
	tab[0][0] = 0;
	tab[0][1] = argv[1][0] - '0';
	tab[0][2] = argv[1][2] - '0';
	tab[0][3] = argv[1][4] - '0';
	tab[0][4] = argv[1][6] - '0';
	tab[0][5] = 0;
	tab[5][0] = 0;
	tab[5][1] = argv[1][8] - '0';
	tab[5][2] = argv[1][10] - '0';
	tab[5][3] = argv[1][12] - '0';
	tab[5][4] = argv[1][14] - '0';
	tab[5][5] = 0;
	tab[0][0] = 0;
	tab[1][0] = argv[1][16] - '0';
	tab[2][0] = argv[1][18] - '0';
	tab[3][0] = argv[1][20] - '0';
	tab[4][0] = argv[1][22] - '0';
	tab[5][0] = 0;
	tab[0][5] = 0;
	tab[1][5] = argv[1][24] - '0';
	tab[2][5] = argv[1][26] - '0';
	tab[3][5] = argv[1][28] - '0';
	tab[4][5] = argv[1][30] - '0';
	tab[5][5] = 0;
}

int	impr_error(int **tab, int size)
{
	if (tab[1][1] == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (tab[1][1] == 4 && tab[1][2] == 4)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	ft_put_table(tab, size);
	return (1);
}

int	free_table(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(tab[i++]);
	}
	free(tab);
	return (0);
}

void	resolve_and_error(int **tab, int number, int number1, int size)
{
	resolve_game(tab, 1, 1, size);
	impr_error(tab, size);
	(void)number;
	(void)number1;
}

int	main(int argc, char **argv)
{
	int	size;
	int	i;
	int	j;
	int	**tab;

	if (argc != 2)
	{
		logs();
		return (0);
	}
	size = 6;
	i = -1;
	tab = malloc(sizeof(*tab) * size);
	if (!tab)
		return (0);
	while (++i < size)
	{
		j = 0;
		tab[i] = malloc(sizeof(**tab) * size);
		if (!tab[i])
			return (0);
		while (j < size)
			tab[i][j++] = 0;
	}
	end(argv, tab, size);
}
