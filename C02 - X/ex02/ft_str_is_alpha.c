/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 14:35:41 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/16 14:43:03 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);
int	is_maj(char c);
int	is_min(char c);

int	is_maj(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	is_min(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	ind;

	i = 0;
	while (str[i])
	{
		ind = is_maj(str[i]) + is_min(str[i]);
		if (!(ind == 1))
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int main(void)
{
    char str1[] = "Bonjour";
    char str2[] = "Bonjour123";
    char str3[] = "";

    // Test de la fonction ft_str_is_alpha avec différentes chaînes
    if (ft_str_is_alpha(str1))
        printf("\"%s\" est entièrement alphabétique.\n", str1);
    else
        printf("\"%s\" n'est pas entièrement alphabétique.\n", str1);

    if (ft_str_is_alpha(str2))
        printf("\"%s\" est entièrement alphabétique.\n", str2);
    else
        printf("\"%s\" n'est pas entièrement alphabétique.\n", str2);

    if (ft_str_is_alpha(str3))
        printf("\"%s\" est entièrement alphabétique.\n", str3);
    else
        printf("\"%s\" n'est pas entièrement alphabétique.\n", str3);

    return 0;
}
*/
