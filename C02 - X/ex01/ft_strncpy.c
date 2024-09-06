/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:01:36 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 14:03:12 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Bonjour, monde!";
    char dest[20];  

    unsigned int n = 7;  // Nombre de caractères à copier

    ft_strncpy(dest, src, n);

    dest[n] = '\0';

    // Affichage des deux chaînes
    printf("Source : %s\n", src);
    printf("Destination : %s\n", dest);

    return 0;
}
*/
