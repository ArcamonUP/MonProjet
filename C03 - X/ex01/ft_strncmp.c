/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 15:41:20 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/18 15:43:27 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascii_to_int(char ascii)
{
	int	ascii_int;

	ascii_int = ascii;
	return (ascii_int);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	if (i < n)
		return (ft_ascii_to_int(s1[i]) - ft_ascii_to_int(s2[i]));
	else
		return (0);
}
