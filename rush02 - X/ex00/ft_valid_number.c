/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaboidin <gaboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:32:04 by gaboidin          #+#    #+#             */
/*   Updated: 2024/09/01 16:49:52 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int	is_valid_number(char *nbr)
{
	int	i;

	i = 0;
	if (nbr[0] == '\0')
		return (0);
	while (nbr[i] != '\0')
	{
		if (nbr[i] < '0' || nbr[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

char	*number_without_leading_zero(char *nbr)
{
	int	i;

	i = 0;
	while (nbr[i] && nbr[i] == '0')
		i++;
	if (nbr[i])
		return (&nbr[i]);
	else
		return (nbr);
}
