/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:40:34 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/20 16:48:11 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc < 2)
		return (1);
	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i])
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		n--;
		write(1, "\n", 1);
	}
}
