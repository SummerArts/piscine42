/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 17:50:57 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/23 11:11:36 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = malloc(sizeof(int) * (max - min));
	if (dest == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	*range = dest;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
    int **tab = malloc(sizeof(int**));
    int ret = ft_ultimate_range(tab, 10, 20);
    for (int i = 0; i < 10; i++)
        printf("t[%d] = %d\n", i, (*tab)[i]);
    printf("return = %d\n", ret);

}*/
