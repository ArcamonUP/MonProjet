/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_row.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpaiva <dpaiva@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 15:39:59 by dpaiva            #+#    #+#             */
/*   Updated: 2024/08/25 20:07:25 by dpaiva           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_row_arg(char grid[4][4], char arg, int row)
{
	int	c;
	int	i;

	c = 1;
	i = 0;
	while (i < 4)
	{
		if (i == 1 && (grid[row][i - 1] < grid[row][i]))
			c += 1;
		else if (i > 1 && (grid[row][i - 1] < grid[row][i - 2]))
			c += 1;
		else if (i > 2 && (grid[row][i - 1] < grid[row][i - 2]
		< grid[row][i - 3]))
			c += 1;
		i++;
	}
	if (c != arg && i == 4)
		return (0);
	return (1);
}

int	check_row_opp(char grid[4][4], int row, char oppose)
{
	int	c;
	int	i;

	c = 1;
	i = 4;
	while (i > 0)
	{
		if (i == 1 && grid[row][i + 1] < grid[row][i])
			c += 1;
		else if (i > 1 && (grid[row][i + 1] < grid[row][i + 2]))
			c += 1;
		else if (i > 2 && (grid[row][i + 1] < grid[row][i + 2]
		< grid[row][i + 3]))
			c += 1;
		i--;
	}
	if (c != oppose && i == 0)
		return (0);
	return (1);
}

int	check_row(char grid[4][4], char arg, int row, char oppose)
{
	if (check_row_arg(grid, arg, row) && check_row_opp(grid, arg, oppose))
		return (1);
	else
		return (0);
}

int	check_row_doublons(char grid[4][4], int row)
{
	int	i;
	int	y;

	i = 0;
	while (i < 4)
	{
		y = i + 1;
		while (y < 4)
		{
			if (grid[row][i] == grid[row][y])
				return (1);
			y++;
		}
		i++;
	}
	return (0);
}
