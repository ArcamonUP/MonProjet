/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:57:20 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/14 15:13:43 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet[26];
	char	lettre;
	int		i;

	lettre = 'z';
	i = 0;
	while (lettre >= 'a')
	{
		reverse_alphabet[i] = lettre;
		lettre--;
		i++;
	}
	write(1, reverse_alphabet, i);
}

/*
int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
