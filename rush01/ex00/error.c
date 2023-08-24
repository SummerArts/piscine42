/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: librilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 00:36:42 by librilla          #+#    #+#             */
/*   Updated: 2023/08/13 00:36:50 by librilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_length(char *tab);

int	size_range(char c)
{
	if (c >= '1' && c <= '4')
		return (1);
	else
		return (0);
}

int	space_format(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((!(i % 2 == 0 && size_range(str[i]))) && (!(i % 2 != 0
					&& str[i] == 32)))
			return (0);
		i++;
	}
	return (1);
}

int	total_length(char *str)
{
	if (ft_length(str) != 31)
		return (0);
	else
		return (1);
}

int	ft_error(char *str)
{
	if (!(total_length(str) && space_format(str)))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
