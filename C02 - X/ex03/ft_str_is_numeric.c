/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:45:22 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 14:46:21 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "123456";
    char str2[] = "123abc";
    char str3[] = "";

    // Test de la fonction ft_str_is_numeric avec différentes chaînes
    if (ft_str_is_numeric(str1))
        printf("\"%s\" est entièrement numérique.\n", str1);
    else
        printf("\"%s\" n'est pas entièrement numérique.\n", str1);

    if (ft_str_is_numeric(str2))
        printf("\"%s\" est entièrement numérique.\n", str2);
    else
        printf("\"%s\" n'est pas entièrement numérique.\n", str2);

    if (ft_str_is_numeric(str3))
        printf("\"%s\" est entièrement numérique.\n", str3);
    else
        printf("\"%s\" n'est pas entièrement numérique.\n", str3);

    return 0;
}
*/
