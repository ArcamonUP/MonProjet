/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:22:58 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/25 14:30:07 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	fill_column(char grid[4][4], char *av, int i, char postab[4][12][4]);
void	fill_tab(char grid[4][4], char *av, char postab[4][12][4]);
void	cross_pos(char arg, char opp, char t_arg[12][4], char postab[4][12][4]);
void	str_cpy(char tab1[12][4], char tab2[12][4], int y, int x);
void	str_cpy2(char tab1[12][4], char tab2[4], int y);
int		check_column(char grid[4][4], char *av, int i, char postab[4][12][4]);
char	*check_pos(char grid[4][4], char tab2[12][4], int i);
int		len_tab(char tab[12][4]);
int		check_row_doublons(char grid[4][4], int row);
int		check_row(char grid[4][4], char arg, int row, char oppose);
int		is_grid_done(char grid[4][4]);
int		ft_atoi(char *str);

int	len_tab(char tab[12][4])
{
	int	i;

	i = 0;
	while (tab[i][0] != '0' && i < 12)
		i++;
	return (i);
}

void	fill_column(char grid[4][4], char *av, int i, char postab[4][12][4])
{
	char	solution[4];
	int		y;
	int		j;
	int		p;

	p = 1;
	j = 3;
	y = (check_column(grid, av, i, postab));
	while (j >= 0)
	{
		p = p * 10;
		solution[j] = (y % p) + '0';
		y = y - (y % p);
		j--;
	}
	y = 0;
	while (y < 4 && solution[y])
	{
		grid[i - 1][y] = solution[y];
		y++;
	}
}

int	check_column(char grid[4][4], char *av, int i, char postab[4][12][4])
{
	char	tab_poss[12][4];
	char	tab_pos_checked[12][4];
	int		x;
	int		y;

	x = 0;
	y = 0;
	cross_pos(*av + ((i - 1) * 2), *av + ((i - 1) * 2 + 8), tab_poss, postab);
	tab_pos_checked[10][0] = *av + ((i - 1) * 2 + 8);
	tab_pos_checked[9][0] = *av + ((i - 1) * 2);
	while (tab_poss[x][0] != '0' && x < 12)
	{
		str_cpy(tab_pos_checked, tab_poss, 11, x);
		if (check_pos(grid, tab_pos_checked, i - 1)[0] != '0')
		{
			str_cpy2(tab_pos_checked, check_pos
				(grid, tab_pos_checked, i - 1), y);
			y++;
		}
		x++;
	}
	tab_pos_checked[y][0] = '0';
	if (len_tab(tab_pos_checked) != 1)
		return (0);
	return (ft_atoi(tab_pos_checked[0]));
}

char	*check_pos(char grid[4][4], char tab2[12][4], int i)
{
	int		row;
	char	stock_temp;

	row = 0;
	while (tab2[11][row] != '0' && row < 4)
	{
		stock_temp = grid[row][i];
		grid[row][i] = tab2[1][row];
		if (check_row_doublons(grid, row))
			return ("");
		if (!(check_row(grid, tab2[9][0], row, tab2[10][0])))
			return ("");
		grid[row][i] = stock_temp;
		row++;
	}
	return (tab2[11]);
}

void	fill_tab(char grid[4][4], char *av, char postab[4][12][4])
{
	int	i;
	int	y;

	y = 0;
	while (is_grid_done(grid) < 40 && y < 10)
	{
		i = 1;
		while (i < 5)
		{
			fill_column(grid, av, i, postab);
			i++;
		}
		y++;
	}
}
