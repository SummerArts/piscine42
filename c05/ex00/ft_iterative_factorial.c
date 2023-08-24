/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 08:53:31 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/18 11:10:15 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	fact = nb;
	while (fact > 1)
	{
		nb *= (fact - 1);
		fact--;
	}
	return (nb);
}

/*#include<stdio.h>
#include<stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
}*/
