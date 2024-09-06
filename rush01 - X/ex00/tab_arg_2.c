/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_arg_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:43:52 by tcoeffet          #+#    #+#             */
/*   Updated: 2024/08/25 12:00:59 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_tab_3(char postab[4][12][4]);
void	init_tab_2(char postab[4][12][4]);
void	init_tab_0(char postab[4][12][4]);

void	init_tab_1_2(char postab[4][12][4])
{
	postab[1][8][0] = '3';
	postab[1][8][1] = '1';
	postab[1][8][2] = '2';
	postab[1][8][3] = '4';
	postab[1][9][0] = '3';
	postab[1][9][1] = '1';
	postab[1][9][2] = '4';
	postab[1][9][3] = '2';
	postab[1][10][0] = '3';
	postab[1][10][1] = '2';
	postab[1][10][2] = '4';
	postab[1][10][3] = '1';
	postab[1][11][0] = '\0';
}

void	init_tab_1_1(char postab[4][12][4])
{
	postab[1][4][0] = '2';
	postab[1][4][1] = '4';
	postab[1][4][2] = '1';
	postab[1][4][3] = '3';
	postab[1][5][0] = '3';
	postab[1][5][1] = '4';
	postab[1][5][2] = '2';
	postab[1][5][3] = '1';
	postab[1][6][0] = '3';
	postab[1][6][1] = '4';
	postab[1][6][2] = '1';
	postab[1][6][3] = '2';
	postab[1][7][0] = '3';
	postab[1][7][1] = '2';
	postab[1][7][2] = '1';
	postab[1][7][3] = '4';
}

void	init_tab_1_0(char postab[3][12][4])
{
	postab[1][0][0] = '1';
	postab[1][0][1] = '4';
	postab[1][0][2] = '2';
	postab[1][0][3] = '3';
	postab[1][1][0] = '1';
	postab[1][1][1] = '4';
	postab[1][1][2] = '3';
	postab[1][1][3] = '2';
	postab[1][2][0] = '2';
	postab[1][2][1] = '1';
	postab[1][2][2] = '4';
	postab[1][2][3] = '3';
	postab[1][3][0] = '2';
	postab[1][3][1] = '4';
	postab[1][3][2] = '3';
	postab[1][3][3] = '1';
}

/* init sub table for arg 2 */

/* the function "make_pos_table()" makes a table holding every possibilites
in line or column following an argument defined when calling the function
the table is built as follows : ""postab[argument][possibility][character] */

int	make_pos_table(char postab[4][12][4])
{
	init_tab_0(postab);
	init_tab_1_0(postab);
	init_tab_1_1(postab);
	init_tab_1_2(postab);
	init_tab_2(postab);
	init_tab_3(postab);
	return (0);
}
