/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 13:34:32 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/23 11:10:40 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		size;
	int		i;

	size = 0;
	while (src[size])
	{
		size++;
	}
	dest = malloc(sizeof(char) * size + 1);
	if (!dest)
		return (0);
	i = 0;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int    main()
{
	char str[30] = "bonjour comment ca va ?";
	char *dup = ft_strdup(str);
	printf("%s",dup);
}*/
