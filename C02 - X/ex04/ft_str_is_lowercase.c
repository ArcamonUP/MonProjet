/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:48:18 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 14:48:59 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "bonjour";
    char str2[] = "Bonjour";
    char str3[] = "";

    // Test de la fonction ft_str_is_lowercase avec différentes chaînes
    if (ft_str_is_lowercase(str1))
        printf("\"%s\" est entièrement en minuscules.\n", str1);
    else
        printf("\"%s\" n'est pas entièrement en minuscules.\n", str1);

    if (ft_str_is_lowercase(str2))
        printf("\"%s\" est entièrement en minuscules.\n", str2);
    else
        printf("\"%s\" n'est pas entièrement en minuscules.\n", str2);

    if (ft_str_is_lowercase(str3))
        printf("\"%s\" est entièrement en minuscules.\n", str3);
    else
        printf("\"%s\" n'est pas entièrement en minuscules.\n", str3);

    return 0;
}
*/
