/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 10:08:47 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 10:23:55 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    char src[] = "Bonjour, monde!";
    char dest[50];  // Assurez-vous que dest est assez grand pour contenir src

    // Appel de la fonction ft_strcpy pour copier src dans dest
    ft_strcpy(dest, src);

    // Affichage des deux chaînes
    printf("Source : %s\n", src);
    printf("Destination : %s\n", dest);

    return 0;
}
*/
