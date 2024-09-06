/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 09:20:26 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 09:22:21 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	compteur;

	compteur = 0;
	while (str[compteur])
	{
		compteur++;
	}
	return (compteur);
}

/*
#include <stdio.h>
int	main(void)
{
	int resultat = 0;
	resultat = ft_strlen("");
	printf("%d", resultat);
	resultat = ft_strlen("Bonjour");
	printf("%d", resultat);
	resultat = ft_strlen("12345@");
	printf("%d", resultat);
	return (0);
}
*/
