/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:25:25 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/18 11:05:53 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*#include<stdio.h>
#include<stdlib.h>
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
}*/
