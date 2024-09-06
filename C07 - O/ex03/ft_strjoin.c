/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 11:47:16 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/29 13:52:25 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	total_tab(char **str, int size)
{
	int	i;
	int	y;
	int	result;

	i = 0;
	result = 0;
	while (i < size)
	{
		y = 0;
		while (str[i][y])
		{
			y++;
		}
		result += y;
		i++;
	}
	return (result);
}

int	str_len(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
		i++;
	return (i);
}

int	put_in_tab(char *str, char *tab, int x)
{
	int	i;

	i = 0;
	while (str[i])
	{
		tab[x] = str[i];
		i++;
		x++;
	}
	return (x);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		x;

	if (size <= 0 || !sep || !strs)
	{
		result = malloc(1);
		if (result)
			result[0] = '\0';
		return (result);
	}
	result = malloc(((size - 1) * str_len(sep) + total_tab(strs, size) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	x = 0;
	while (i < size)
	{
		x = put_in_tab(strs[i], result, x);
		if (i < size - 1)
			x = put_in_tab(sep, result, x);
		i++;
	}
	result[x] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	*str[] = {"Bonjour", "", "trkl"};
	char	sep[] = " ";
	char	*test;

	test = ft_strjoin(3, str, sep);
	printf("%s\n", test);
	free(test);
	return (0);
}
*/
