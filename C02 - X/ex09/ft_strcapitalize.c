/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:23:33 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/17 17:26:14 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_min(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

int	is_maj(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ind;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i] && str[i + 1])
	{
		ind = is_min(str[i]) + is_maj(str[i]) + is_num(str[i]);
		if (ind == 0)
		{
			if (is_min(str[i + 1]) == 1)
				str[i + 1] = str[i + 1] - 32;
		}
		else
		{
			if (is_maj(str[i + 1]) == 1)
				str[i + 1] = str[i + 1] + 32;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str1[] = "bonjour le monde";
    char str2[] = "42moTs quaRante-deux; CInquante+et+un";

    // Test de la fonction ft_strcapitalize avec différentes chaînes
    printf("Avant : \"%s\"\n", str1);
    printf("Après : \"%s\"\n\n", ft_strcapitalize(str1));

    printf("Avant : \"%s\"\n", str2);
    printf("Après : \"%s\"\n\n", ft_strcapitalize(str2));

    return 0;
}
*/
