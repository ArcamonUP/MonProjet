/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:43:04 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 13:43:32 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);
int	base_valide(char *base);
int	get_value(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	base_valide(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	signe;
	int	value;

	signe = 1;
	result = 0;
	if (!base_valide(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	value = get_value(*str, base);
	while (value != -1)
	{
		result = result * ft_strlen(base) + value;
		str++;
		value = get_value(*str, base);
	}
	return (result * signe);
}

/*
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("%d", ft_atoi_base(argv[1], argv[2]));
	return (0);
}
*/
