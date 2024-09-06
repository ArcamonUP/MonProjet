/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:11:04 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/25 12:11:10 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		arg_count_check(char *str);
void	grid_tab(char grid[4][4]);
void	pre_fill_tab(char grid[4][4], char *arg, char postab[4][12][4]);
void	aff_tab(char grid[4][4]);
int		make_pos_table(char postab[4][12][4]);

int	main(int argc, char **av)
{
	char	grid[4][4];
	char	postab[4][12][4];

	if (argc != 2 || arg_count_check(av[1]))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	grid_tab(grid);
	make_pos_table(postab);
	pre_fill_tab(grid, av[1], postab);
	aff_tab(grid);
	return (0);
}
