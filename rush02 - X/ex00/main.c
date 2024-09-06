/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaboidin <gaboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:54:03 by rarangur          #+#    #+#             */
/*   Updated: 2024/08/31 14:37:21 by gaboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int	main(int argc, char **argv)
{
	char	*filename;
	char	*nbr_str;

	if (argc < 2 || argc > 3)
		ft_print_error();
	else
	{
		if (argc == 3)
		{
			filename = argv[1];
			nbr_str = argv[2];
		}
		else
		{
			filename = "numbers.dict";
			nbr_str = argv[1];
		}
		if (!is_valid_number(nbr_str))
			ft_print_error();
		else
			ft_solve(filename, number_without_leading_zero(nbr_str));
	}
	return (0);
}
