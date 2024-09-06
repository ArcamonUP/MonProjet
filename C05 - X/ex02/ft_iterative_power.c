/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:03:37 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 18:08:29 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb;
	while (power - 1 != 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(2, 4));
}
*/
