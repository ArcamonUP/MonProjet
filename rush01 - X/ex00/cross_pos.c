/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_pos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 20:10:14 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/25 20:10:20 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	poscpy(char arg, char postab[4][12][4], char t_arg[12][4], int i)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (t_arg[k][0] != '0')
		k++;
	while (j < 4)
	{
		t_arg[k][j] = postab[arg - 1 - '0'][i][j];
		j++;
	}
}

int	is_same(char arg, char opp, char postab[4][12][4], int i)
{
	int	j;
	int	k;
	int	l;

	j = 0;
	while (postab[opp - 1 - '0'][j][0] != '\0')
	{
		l = 3;
		k = 0;
		while (postab[arg - 1 - '0'][i][k] == postab[opp - 1 - '0'][j][l])
		{
			if (k == 3)
				return (1);
			k++;
			l--;
		}
		j++;
	}
	return (0);
}

void	init_tab_ascii(char *str)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		str[i] = '0';
		i++;
	}
}

void	t_arg_init(char t_arg[12][4])
{
	int	i;

	i = 0;
	while (i < 12)
	{
		init_tab_ascii(t_arg[i]);
		i++;
	}
}

void	cross_pos(char arg, char opp, char t_arg[12][4], char postab[4][12][4])
{
	int	i;

	i = 0;
	t_arg_init(t_arg);
	while (postab[arg - 1 - '0'][i][0] != '\0')
	{
		if (is_same(arg, opp, postab, i) == 1)
			poscpy(arg, postab, t_arg, i);
		i++;
	}
}
