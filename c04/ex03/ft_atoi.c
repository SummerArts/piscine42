/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:19:35 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/17 13:30:42 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	i = 0;
	nb = 0;
	sign = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] && str[i] <= 32)
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * sign);
}

/*#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d",ft_atoi(argv[1]));
}*/
