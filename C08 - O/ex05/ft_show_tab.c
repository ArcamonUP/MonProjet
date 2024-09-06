/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 09:24:15 by kbaridon          #+#    #+#             */
/*   Updated: 2024/09/03 09:29:36 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	ft_size_nb(int nb)
{
	int	size;

	if (nb == 0)
		return (1);
	size = 1;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		size = size * 10;
	}
	return (size);
}

void	ft_putnbr(int nb)
{
	char	c;
	int		size;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	size = ft_size_nb(nb);
	while (size != 0)
	{
		c = (nb / size) + '0';
		write(1, &c, 1);
		nb = nb % size;
		size = size / 10;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
