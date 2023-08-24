/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:36:51 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/18 11:13:03 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * (ft_recursive_power(nb, power -1)));
}

/*#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_power(atoi(argv[1]),atoi(argv[2])));
}*/
