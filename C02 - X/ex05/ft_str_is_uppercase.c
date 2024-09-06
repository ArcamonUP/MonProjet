/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:50:47 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 14:51:21 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "BONJOUR";
    char str2[] = "Bonjour";
    char str3[] = "";

    // Test de la fonction ft_str_is_uppercase avec différentes chaînes
    if (ft_str_is_uppercase(str1))
        printf("\"%s\" est entièrement en majuscules.\n", str1);
    else
        printf("\"%s\" n'est pas entièrement en majuscules.\n", str1);

    if (ft_str_is_uppercase(str2))
        printf("\"%s\" est entièrement en majuscules.\n", str2);
    else
        printf("\"%s\" n'est pas entièrement en majuscules.\n", str2);

    if (ft_str_is_uppercase(str3))
        printf("\"%s\" est entièrement en majuscules.\n", str3);
    else
        printf("\"%s\" n'est pas entièrement en majuscules.\n", str3);

    return 0;
}
*/
