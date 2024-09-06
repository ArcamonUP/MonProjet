/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:44:08 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/01 19:10:58 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char *src, int start, int stop)
{
	char	*dest;
	int		read;
	int		write;

	dest = malloc(stop - start + 1);
	write = 0;
	read = start;
	while (read < stop && src[read] != '\0')
	{
		dest[write] = src[read];
		read++;
		write++;
	}
	dest[write] = '\0';
	return (dest);
}
