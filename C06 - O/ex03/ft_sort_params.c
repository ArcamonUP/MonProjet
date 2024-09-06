/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 16:55:38 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/20 16:59:41 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	print_str(int argc, char *argv[])
{
	int		i;
	char	*str;

	i = 1;
	while (i < argc)
	{
		str = argv[i];
		while (*str)
		{
			write(1, str, 1);
			str++;
		}
		write(1, "\n", 1);
		i++;
	}
}

/*
int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	print_str(argc, argv);
}
*/
