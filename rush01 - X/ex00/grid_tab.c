/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tableau.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 10:52:50 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/24 11:30:42 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	aff_tab(char grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			write(1, &grid[x][y], 1);
			if (y < 3)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
}

void	grid_tab(char grid[4][4])
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			grid[y][x] = '0';
			y++;
		}
		x++;
	}
}
