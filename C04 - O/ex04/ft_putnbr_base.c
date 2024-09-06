/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 10:43:04 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 10:57:59 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	base_valide(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_size_nb(int nb, int base)
{
	int	size;

	if (nb == 0)
		return (1);
	size = 1;
	while (nb / base != 0)
	{
		nb = nb / base;
		size *= base;
	}
	return (size);
}

void	convertisseur(int nbr, char *base, int base_len)
{
	int		taille;
	int		temp;
	char	c;
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	taille = ft_size_nb(nb, base_len);
	while (taille != 0)
	{
		temp = nb / taille;
		c = base[temp];
		write(1, &c, 1);
		nb = nb % taille;
		taille = taille / base_len;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_len;

	if (!base_valide(base))
		return ;
	base_len = ft_strlen(base);
	convertisseur(nbr, base, base_len);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
*/
