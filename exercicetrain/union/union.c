/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:40:07 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/24 15:12:38 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	check(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *stra, char *strb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (stra[i])
	{
		if (check(stra, stra[i], i) == 1)
			write(1, &stra[i], 1);
		i++;
	}
	while (strb[j])
	{
		if (check2(stra, strb[j]) == 1)
		{
			if (check(strb, strb[j], j) == 1)
				write(1, &strb[j], 1);
		}
		j++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
