/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:34:20 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/17 16:46:58 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "bonjour";
    char str2[] = "HeLLo WoRld!";
    char str3[] = "";

    // Test de la fonction ft_strupcase avec différentes chaînes
    printf("Avant : %s\n", str1);
    printf("Après : %s\n\n", ft_strupcase(str1));

    printf("Avant : %s\n", str2);
    printf("Après : %s\n\n", ft_strupcase(str2));

    return 0;
}
*/
