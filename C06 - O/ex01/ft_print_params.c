/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 15:56:33 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/20 15:59:16 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	n;

	if (argc < 2)
		return (1);
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i])
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
	}
}
