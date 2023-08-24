/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncouton <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:44:23 by ncouton           #+#    #+#             */
/*   Updated: 2023/08/19 10:39:05 by ncouton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int main(void)
{
    char to_find[80] = "ahhah";
    char str[80] = "ahahahahahahahahhahahah";
    printf("strstr:   %s\n",strstr(str,to_find));
    printf("ft_strstr:%s\n",ft_strstr(str,to_find));
}
