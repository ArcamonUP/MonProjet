/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:39:44 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/22 11:20:42 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	*range = malloc((max - min) * sizeof(int));
	if (*range == NULL)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
    int *range;
    int min = 1;
    int max = 50;
    int size;

    size = ft_ultimate_range(&range, min, max);
    printf("%d", size);
    free(range);
    return (0);
}
*/
