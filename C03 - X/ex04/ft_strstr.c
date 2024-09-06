/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 19:14:04 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/18 19:35:39 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	ft_compare(char *str, char *to_find, int a)
{
	int	j;

	j = 0;
	while (to_find[j] && str[a] == to_find[j])
	{
		a++;
		j++;
	}
	return (to_find[j] == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	a;

	i = 0;
	if (*to_find == '\0')
		return (str);
	if (*str == '\0' || ft_len(str) < ft_len(to_find))
		return (NULL);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			a = i;
			if (ft_compare(str, to_find, a) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char str[] = "Hello, this is a test string.";
	char to_find[] = "test";

	char *result = ft_strstr(str, to_find);

	if (result != NULL)
		printf("Substring found: %s\n", result);
	else
		printf("Substring not found.\n");

	return (0);
}
*/
