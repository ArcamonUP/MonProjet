/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:37:36 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/25 11:37:47 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_grid_done(char grid[4][4])
{
	int	x;
	int	y;
	int	c;

	c = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			c += grid[y][x] - '0';
			x++;
		}
		y++;
	}
	return (c);
}

void	str_cpy(char tab1[12][4], char tab2[12][4], int y, int x)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		tab1[y][i] = tab2[x][i];
		i++;
	}
}

void	str_cpy2(char tab1[12][4], char tab2[4], int y)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		tab1[y][i] = tab2[i];
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	result;

	i = 0;
	nb = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			nb = -nb;
		i++;
	}
	while (str[i] && '0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * nb);
}
