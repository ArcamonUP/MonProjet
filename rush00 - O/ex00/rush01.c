/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 10:16:45 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/17 15:00:57 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*We wanted to comment but we can't in the 
function (norminette) so it's useless*/
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
	print_ligne(c, '/', '*', '\\');
	ligne = 1;
	while (ligne < r - 1)
	{
		print_ligne(c, '*', ' ', '*');
		ligne++;
	}
	if (r > 1)
		print_ligne(c, '\\', '*', '/');
}
