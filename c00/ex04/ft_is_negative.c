/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:13:57 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/09 09:54:16 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	u;
	char	c;

	u = 'N';
	c = 'P';
	if (n < 0)
	{
		write(1, &u, 1);
	}
	else
	{
		write(1, &c, 1);
	}
}

/*int	main(void)
{
	
	ft_is_negative(-20);
}*/
