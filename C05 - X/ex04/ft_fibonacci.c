/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:20:36 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/19 18:27:54 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    int result;

    if (argc == 2)
    {
        result = atoi(argv[1]);
        result = ft_fibonacci(result);
        printf("%d\n", result);
    }
    return 0;
}
*/
