/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:35:29 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/14 17:39:02 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_x3(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	first_num;
	int	second_num;
	int	third_num;

	first_num = 0;
	while (first_num < 8)
	{
		second_num = first_num + 1;
		while (second_num < 9)
		{
			third_num = second_num + 1;
			while (third_num < 10)
			{
				ft_write_x3(first_num + '0', second_num + '0', third_num + '0');
				if (first_num != 7 || second_num != 8 || third_num != 9)
				{
					write(1, ", ", 2);
				}
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
}

/*
int main(void)
{
	ft_print_comb();
	return (0);
}
*/
