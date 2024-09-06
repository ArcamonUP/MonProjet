/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:49:27 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/14 15:51:43 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	resultat[10];
	int		i;

	i = 0;
	while (i < 10)
	{
		resultat[i] = '0' + i;
		i++;
	}
	write(1, resultat, 10);
}

/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
