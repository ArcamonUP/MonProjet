/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 07:14:44 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/15 07:31:50 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int a, int b)
{
	char	num_str[2];

	num_str[0] = a / 10 + '0';
	num_str[1] = a % 10 + '0';
	write(1, num_str, 2);
	write(1, " ", 1);
	num_str[0] = b / 10 + '0';
	num_str[1] = b % 10 + '0';
	write(1, num_str, 2);
	if (a != 98 || b != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first_num;
	int	second_num;

	first_num = 0;
	while (first_num <= 98)
	{
		second_num = first_num + 1;
		while (second_num <= 99)
		{
			ft_write(first_num, second_num);
			second_num++;
		}
		first_num++;
	}
}

/*
int main(void)
{
	ft_print_comb2();
	return (0);
}
*/
