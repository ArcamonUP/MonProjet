/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:51:03 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/15 16:58:32 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	stock_temp;

	i = 0;
	size--;
	while (i <= size)
	{
		stock_temp = tab[i];
		tab[i] = tab[size];
		tab[size] = stock_temp;
		i++;
		size--;
	}
}
