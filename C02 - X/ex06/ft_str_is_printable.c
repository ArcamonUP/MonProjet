/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 09:33:11 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/17 09:48:15 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(' ' <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Hello, World!";
    char str2[] = "Hello\tWorld";
    char str3[] = "";

    // Test de la fonction ft_str_is_printable avec différentes chaînes
    if (ft_str_is_printable(str1))
        printf("\"%s\" est entièrement imprimable.\n", str1);
    else
        printf("\"%s\" contient des caractères non imprimables.\n", str1);

    if (ft_str_is_printable(str2))
        printf("\"%s\" est entièrement imprimable.\n", str2);
    else
        printf("\"%s\" contient des caractères non imprimables.\n", str2);

    if (ft_str_is_printable(str3))
        printf("\"%s\" est entièrement imprimable.\n", str3);
    else
        printf("\"%s\" contient des caractères non imprimables.\n", str3);

    return 0;
}
*/
