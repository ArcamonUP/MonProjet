/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:42:57 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/21 13:55:48 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	tab = malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main(void)
{
	int	*result;
	int	i;
	
	i = 0;
	result = ft_range(5, 39);
	while (result[i])
	{
		printf("%d\n", result[i]);
		i++;
	}
	free(result);
	return (0);
}
*/
