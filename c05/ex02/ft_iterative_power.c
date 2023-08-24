/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:00:34 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/15 11:35:40 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	resultat = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}

/*#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_iterative_power(atoi(argv[1]),atoi(argv[2])));
}*/
