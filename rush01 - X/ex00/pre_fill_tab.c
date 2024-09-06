/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remplissage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:50:03 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/24 17:20:10 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	insert_four_1(char grid[4][4], int i);
void	insert_four_2(char grid[4][4], int i);
void	insert_one(char grid[4][4], int i);
void	fill_tab(char grid[4][4], char *av, char postab[4][12][4]);
char	aff_tab(char grid[4][4]);

void	insert_four_1(char grid[4][4], int i)
{
	int	y;

	if (0 < i && i < 5)
	{
		y = 0;
		while (y < 4)
		{
			grid[i - 1][y] = 4 - y + '0';
			y++;
		}
	}
	else if (4 < i && i < 9)
	{
		y = 3;
		while (y >= 0)
		{
			grid[(i % 4) - 1][y] = 4 - y + '0';
			y--;
		}
	}
	else
		insert_four_2(grid, i);
}

void	insert_four_2(char grid[4][4], int i)
{
	int	y;

	if (8 < i && i < 13)
	{
		y = 0;
		while (y < 4)
		{
			grid[y][(i % 4) - 1] = 4 - y + '0';
			y++;
		}
	}
	else
	{
		y = 3;
		while (y >= 0)
		{
			grid[(i % 4) - 1][y] = 4 - y + '0';
			y--;
		}
	}
}

void	insert_one(char grid[4][4], int i)
{
	if (0 < i && i < 5)
		grid[i - 1][0] = 4 + '0';
	else if (4 < i && i < 9)
		grid[(i - 1) % 4][3] = 4 + '0';
	else if (8 < i && i < 13)
		grid[0][(i - 1) % 4] = 4 + '0';
	else
		grid[3][(i - 1) % 4] = 4 + '0';
}

void	pre_fill_tab(char grid[4][4], char *av, char postab[4][12][4])
{
	int	i;

	i = 1;
	while (i < 16)
	{
		if (*av + (i - 1) * 2 == '4')
			insert_four_1(grid, i);
		else if (*av + (i - 1) * 2 == '1')
			insert_one(grid, i);
		i++;
	}
	fill_tab(grid, av, postab);
}
