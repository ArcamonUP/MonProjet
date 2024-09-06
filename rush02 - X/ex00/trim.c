/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:19:59 by kbaridon          #+#    #+#             */
/*   Updated: 2024/08/31 18:32:53 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ltrim(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	return (str + i);
}

char	*rtrim(char *str)
{
	int	i;

	i = 0;
	while (str[i] != ' ')
		i++;
	str[i] = '\0';
	return (str);
}

char	*trim(char *str)
{
	str = ltrim(str);
	str = rtrim(str);
	return (str);
}
