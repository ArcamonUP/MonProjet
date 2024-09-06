/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:58:38 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/29 14:58:48 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

void	cas_negatif(char *result)
{
	int	i;

	i = 1;
	result[0] = '-';
	result[1] = '1';
	while (i < 32)
	{
		i++;
		result[i] = '0';
	}
	result[33] = '\0';
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
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
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
