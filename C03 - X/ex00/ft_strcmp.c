/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 11:11:25 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/18 11:29:23 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	int result;

	result = ft_strcmp("abcde", "abc");
	printf("Result of ft_strcmp(\"abcd\", \"abc\"): %d\n", result);

	result = ft_strcmp("a", "b");
	printf("Result of ft_strcmp(\"a\", \"b\"): %d\n", result);
	
	result = ft_strcmp("abc", "abcd");
	printf("Result of ft_strcmp(\"abc\", \"abcd\"): %d\n", result);


	return (0);
}
*/
