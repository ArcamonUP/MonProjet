/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 10:35:48 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/01 15:52:51 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_equal_str(char *a, char*b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	if (*a == *b)
		return (1);
	return (0);
}

char	*ft_read_dict(char ***dict, char *key)
{
	int	i;

	i = 0;
	while (dict[i])
	{
		if (is_equal_str(dict[i][0], key))
			return (dict[i][1]);
		i++;
	}
	return (NULL);
}

const static char	*g_keys[41] = {
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
	"10", "11", "12", "13", "14", "15", "16", "17", "18",
	"19", "20", "30", "40", "50", "60", "70", "80", "90",
	"100", "1000", "1000000", "1000000000", "1000000000000",
	"1000000000000000", "1000000000000000000",
	"1000000000000000000000", "1000000000000000000000000",
	"1000000000000000000000000000",
	"1000000000000000000000000000000",
	"1000000000000000000000000000000000",
	"1000000000000000000000000000000000000"};

int	validate_dict(char ***dict)
{
	int	i;

	i = 0;
	while (i < 41)
	{
		if (ft_read_dict(dict, (char *)g_keys[i]) == NULL)
			return (0);
		i++;
	}
	return (1);
}

/*
#include "function.h"
#include <stdio.h>
int	main(int c, char **v)
{
	char **lines;
	char ***dict;
	int i;

	if (c != 2) return (2);

	lines = ft_read_file("numbers.dict");
	i = 0;
	while (lines[i])
	{
		printf("%s\n", lines[i]);
		i++;
	}
	dict = ft_parse(lines);
	i = 0;
	while (dict[i])
	{
		printf("'%s' : '%s'\n", dict[i][0], dict[i][1]);
		i++;
	}
	printf("dict['%s'] = '%s'\n", v[1], ft_read_dict(dict, v[1]));
}
*/
