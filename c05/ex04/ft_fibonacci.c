/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:17:46 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/18 11:06:51 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	resultat;

	resultat = index;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d",ft_fibonacci(atoi(argv[1])));
}*/
