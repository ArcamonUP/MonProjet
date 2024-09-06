/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:04:36 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/15 17:11:05 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_comparaison(int *tab, int i)
{
	int	stock_temp;

	if (i > 0 && tab[i - 1] > tab[i])
	{
		stock_temp = tab[i - 1];
		tab[i - 1] = tab[i];
		tab[i] = stock_temp;
		ft_comparaison(tab, i - 1);
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (i < size)
	{
		ft_comparaison(tab, i);
		i++;
	}
}
