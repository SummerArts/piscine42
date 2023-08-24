/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 15:12:53 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/06 15:49:22 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*int	main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	int i;

	while(i < 5)
    {
        printf("%d", tab[i]);
        i++;
    }

	printf("\n\n");

	ft_rev_int_tab(tab, 5);
	i = 0;
	while(i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
