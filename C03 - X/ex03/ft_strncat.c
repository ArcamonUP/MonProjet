/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:21:37 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/18 18:23:44 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] && j < nb)
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

int main() 
{
    char dest[50] = "Hello, ";
    char src[] = "world! This is a test."; 

    // Concaténer au maximum 6 caractères de `src` à `dest`
    ft_strncat(dest, src, 6);

    // Afficher le résultat
    printf("Résultat après ft_strncat: %s\n", dest);

    return 0;
}
*/
