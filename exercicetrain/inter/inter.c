/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:57:50 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/24 14:19:25 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
		{
			return (0);
		}
		i++;
	}
	return (1);

}

void	inter(char *stra, char *strb)
{
	int	i;
	int	j;

	i = 0;
	while (stra[i])
	{
		j = 0;
		while (strb[j])
		{
			if (stra[i] == strb[j])
			{
				if (check(stra, stra[i], i) == 1)
					write(1, &stra[i], 1);
				break;
			}
			j++;
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv [2]);
	write(1, "\n", 1);
}
