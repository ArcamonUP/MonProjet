/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaboidin <gaboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:42:15 by gaboidin          #+#    #+#             */
/*   Updated: 2024/09/01 19:21:00 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "function.h"

void	free_lines(char	**arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	free_dict(char ***arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i][0]);
		free(arr[i][1]);
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	ft_solve(char *filename, char *nbr)
{
	char	**lines;
	char	***dict;

	lines = ft_read_file(filename, &lines);
	if (lines == NULL)
	{
		ft_print_dict_error();
		return ;
	}
	dict = ft_parse(lines);
	free_lines(lines);
	if (dict == NULL)
	{
		ft_print_dict_error();
		return ;
	}
	if (validate_dict(dict))
		recursive_printer(nbr, dict);
	else
		ft_print_dict_error();
	free_dict(dict);
}
