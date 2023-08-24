/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:09:27 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/15 09:43:18 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <string.h>
#include <stdio.h>
int main(void)
{
    char s1[128] = "bonjour";
    char s2[128] = "4939u8*";
    char s3[128] = "bonjour";
    char s4[128] = "4939u8*";
    printf("---strcat---\n%s\n",strcat(s1, s2));
    printf("---ft_strcat---\n%s\n",ft_strcat(s3, s4));
}*/
