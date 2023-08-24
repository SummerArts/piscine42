/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 18:49:52 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/03 19:13:22 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpdiv;
	int	tmpmod;

	tmpdiv = *a / *b;
	tmpmod = *a % *b;
	*a = tmpdiv;
	*b = tmpmod;
}
