/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:32:37 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/15 09:44:15 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
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
    unsigned int nb = 4;
    char s1[128] = "bonjour";
    char s2[128] = "salut";
    char s3[128] = "bonjour";
    char s4[128] = "salut";
    printf("---strncat---\n%s\n",strncat(s1, s2, nb));
    printf("---ft_strncat---\n%s\n",ft_strncat(s3, s4, nb));
}*/
