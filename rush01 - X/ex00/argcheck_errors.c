/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argcheck.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcoeffet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 14:08:01 by tcoeffet          #+#    #+#             */
/*   Updated: 2024/08/25 10:36:02 by tcoeffet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		arg_count_check(char *str);
int		arg_opposite_check(char *str);
int		arg_line_check(char *str);
void	init_tab(char *str);

void	init_tab(char *str)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		str[i] = 0;
		i++;
	}
}

int	arg_count_check(char *str)
{
	int		i;
	char	c[4];

	i = 0;
	init_tab(c);
	while ((str[i] >= '1' && str[i] <= '4') || str[i] == ' ')
	{
		if (str[i] == '1')
			c[0] += 1;
		else if (str[i] == '2')
			c[1] += 1;
		else if (str[i] == '3')
			c[2] += 1;
		else if (str[i] == '4')
			c[3] += 1;
		i++;
	}
	if (i != 31 || c[3] > 2 || c[0] > 4 || c[1] > 8
		|| (c[0] + c[1] + c[2] + c[3]) != 16)
		return (1);
	return (arg_opposite_check(str));
}

int	arg_opposite_check(char *str)
{
	int	i;
	int	ope;

	ope = 1;
	i = 0;
	while (str[i])
	{
		if (i % 8 == 0 && i != 0)
			ope *= -1;
		if (str[i] == '4' && str[i + (ope * 8)] != '1')
			return (1);
		else if (str[i] == '3' && str[i + (ope * 8)] == '3')
			return (1);
		i++;
	}
	return (arg_line_check(str));
}

int	arg_line_check(char *str)
{
	int		i;
	char	c[4];

	i = 0;
	init_tab(c);
	while (str[i])
	{
		if (i % 8 == 0)
			init_tab(c);
		if (str[i] == '1')
			c[0] += 1;
		else if (str[i] == '2')
			c[1] += 1;
		else if (str[i] == '3')
			c[2] += 1;
		else if (str[i] == '4')
			c[3] += 1;
		if (c[0] > 1 || c[1] > 3 || c[2] > 2 || c[3] > 1)
			return (1);
		i++;
	}
	return (0);
}
