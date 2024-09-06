/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 13:35:19 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/14 15:12:32 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet[26];
	char	lettre;
	int		i;

	lettre = 'a';
	i = 0;
	while (lettre <= 'z')
	{
		alphabet[i] = lettre;
		lettre++;
		i++;
	}
	write(1, alphabet, i);
}

/*
int main(void)
{
	ft_print_alphabet();
	return (0);
}
*/
