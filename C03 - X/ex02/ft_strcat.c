/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 17:04:27 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/18 17:05:21 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int main() {
    char dest[100] = "Bonjour, ";
    char src[] = "monde!";

    // Concaténer src à dest
    ft_strcat(dest, src);

    // Afficher le résultat
    printf("Chaîne concaténée : %s\n", dest);

    return 0;
}
*/
