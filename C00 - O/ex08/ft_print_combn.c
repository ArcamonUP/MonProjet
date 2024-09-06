/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:26:59 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/15 12:07:32 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char *resultat, int n)
{
	write(1, resultat, n);
}

void	ft_print_comb_recursive(int start, int taille, int n, char *resultat)
{
	if (taille == n)
	{
		ft_write(resultat, n);
		if (resultat[0] != '0' + (10 - n))
		{
			write(1, ", ", 2);
		}
		return ;
	}
	while (start <= 9 - (n - taille) + 1)
	{
		resultat[taille] = start + '0';
		ft_print_comb_recursive(start + 1, taille + 1, n, resultat);
		start++;
	}
}

void	ft_print_comb(int n)
{
	char	resultat[10];

	if (n <= 0 || n >= 10)
	{
		write(2, "n doit etre compris entre 0 et 9", 32);
		return ;
	}
	ft_print_comb_recursive(0, 0, n, resultat);
}

/*
int main(void)
{
	ft_print_comb(2);
	ft_print_comb(10)
	return (0);
}
*/
