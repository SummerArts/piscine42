/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:37:17 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/06 19:42:44 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	if (x > 0 && y > 0)
	{
		while (l < y)
		{
			c = 0;
			while (c < x)
			{
				if ((l == 0 || l == y - 1) && (c == 0 || c == x - 1))
					ft_putchar('o');
				else if (l == 0 || l == y - 1)
					ft_putchar('-');
				else if (c == 0 || c == x - 1)
					ft_putchar('|');
				else
					ft_putchar(' ');
				c++;
			}
			ft_putchar('\n');
			l++;
		}
	}
}
