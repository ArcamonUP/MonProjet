/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:55:21 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/15 08:01:52 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_size_nb(int nb)
{
	int	size;

	if (nb == 0)
	{
		return (1);
	}
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
}
/*
int main(void)
{
	ft_putnbr(-2147483647);
	ft_putnbr(0);
	ft_putnbr(2147483647);
	return (0);
}
*/
