/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:47:42 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/21 17:47:13 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dest;

	if (min >= max)
		return (0);
	dest = malloc(sizeof(*dest) * (max - min));
	if (dest == NULL)
		return (0);
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	int    *t = ft_range(10, 20);
	int		i;

	i = 0;
	while (i < 10)
	{
		printf("t[%d] = %d\n", i, t[i]);
		i++;
	}
}*/
