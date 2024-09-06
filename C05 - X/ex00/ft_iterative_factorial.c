/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:33:00 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 14:38:00 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0)
		return (1);
	else if (nb < 0 || nb > 12)
		return (0);
	result = nb;
	nb--;
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	int	result;
	
	result = ft_iterative_factorial(6);
	printf("%d", result);
}
*/
