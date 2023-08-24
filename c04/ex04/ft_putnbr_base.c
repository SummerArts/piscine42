/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:31:26 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/17 16:22:40 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char to_find)
{
	int	i;

	i = 0;
	while (str && str[i])
	{
		if (str[i] == to_find)
			return (str);
		i++;
	}
	return (0);
}

int	is_valid(char *base)
{
	int	i;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (ft_strstr(&base[i + 1], base[i]) || base[i] == '+'
			|| base[i] == '-' || base[i] <= 32
			|| base[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	n;

	n = nbr;
	if (is_valid(base) == 0)
		return ;
	if (n / ft_strlen(base) != 0)
		ft_putnbr_base(n / ft_strlen(base), base);
	ft_putchar(base[n % ft_strlen(base)]);
}

/*int	main()
{
	char	base[] = "01245";

	ft_putnbr_base(16, base);
	return (0);
}*/
