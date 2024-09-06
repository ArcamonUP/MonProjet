/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:39:18 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/27 14:11:32 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_size_nb(int nb, int base);
int		ft_strlen(char *str);
int		get_value(char c, char *base);
int		base_valide(char *base);
int		ft_atoi_base(char *str, char *base);
void	convertisseur(int nbr, char *base, int base_len, char *result);
void	cas_negatif(char *result);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	signe;
	int	value;

	signe = 1;
	result = 0;
	if (!base_valide(base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			signe = -signe;
		str++;
	}
	value = get_value(*str, base);
	while (value != -1)
	{
		result = result * ft_strlen(base) + value;
		str++;
		value = get_value(*str, base);
	}
	return (result * signe);
}

void	convertisseur(int nbr, char *base, int base_len, char *result)
{
	int		taille;
	int		temp;
	int		i;
	long	nb;

	nb = nbr;
	i = 0;
	if (nb < 0)
		nb = -nb;
	taille = ft_size_nb(nb, base_len);
	while (taille != 0)
	{
		temp = nb / taille;
		result[i] = base[temp];
		i++;
		nb = nb % taille;
		taille = taille / base_len;
	}
	result[i] = '\0';
}

//Ici : malloc(34) car int_min = 32 bits + les 2 car (nul et le -)
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		base_len;
	int		signe;
	char	*result;

	signe = 1;
	if (!(base_valide(base_from) && base_valide(base_to)))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	base_len = ft_strlen(base_to);
	result = malloc(34);
	if (nb == -2147483648 && base_len == 2)
		cas_negatif(result);
	else if (nb < 0)
	{
		result[0] = '-';
		convertisseur(nb, base_to, base_len, result + 1);
	}
	else
		convertisseur(nb, base_to, base_len, result);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	char	*result;

	if (argc == 4)
	{
		result = ft_convert_base(argv[1], argv[2], argv[3]);
		printf("%s", result);
		free(result);
	}
	return (0);
}
*/
