/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:56:56 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/17 14:58:13 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_ligne(int taille, char premierc, char milieuc, char dernierc)
{
	int	i;

	if (taille > 0)
		ft_putchar(premierc);
	i = 1;
	while (i < taille - 1)
	{
		ft_putchar(milieuc);
		i++;
	}
	if (taille > 1)
		ft_putchar(dernierc);
	ft_putchar('\n');
}

void	rush(int c, int r)
{
	int	ligne;

	if (c < 1 || r < 1)
	{
		write(2, "Merci de mettre des entiers valides et positifs\n", 48);
		return ;
	}
	print_ligne(c, 'o', '-', 'o');
	ligne = 1;
	while (ligne < r - 1)
	{
		print_ligne(c, '|', ' ', '|');
		ligne++;
	}
	if (r > 1)
		print_ligne(c, 'o', '-', 'o');
}
