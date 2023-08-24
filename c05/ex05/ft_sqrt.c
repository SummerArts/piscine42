/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:31:25 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/19 13:32:37 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i <= 46340)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d",ft_sqrt(atoi(argv[1])));
}*/
