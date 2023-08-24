/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:31:00 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/22 12:22:53 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_find_size(char **strs, int sep, int size)
{
	int	final_size;
	int	i;

	final_size = 0;
	i = 0;
	while (i < size)
	{
		final_size += ft_strlen(strs[i]);
		if (i + 1 < size)
			final_size += sep;
		i++;
	}
	return (final_size);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*chain;
	int		total;
	int		i;

	total = ft_find_size(strs, ft_strlen(sep), size);
	chain = malloc(sizeof(char) * (total + 1));
	if (chain == 0)
		return (0);
	i = 0;
	while (i < total || i == 0)
	{
		chain[i] = '\0';
		i++;
	}
	i = 0;
	while (i < size)
	{
		ft_strcat(chain, strs[i]);
		if (i + 1 < size)
			ft_strcat(chain, sep);
		i++;
	}
	return (chain);
}

#include <stdio.h>

int	main(void)
{
	char    *tab[] = {"salut","comment","ca","va","?"};
	char *r = ft_strjoin(5, tab, " ");
	printf("%s",r);
}
