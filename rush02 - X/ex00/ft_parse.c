/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rarangur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:41:02 by rarangur          #+#    #+#             */
/*   Updated: 2024/09/01 19:20:15 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*trim(char *str);
char	*ft_substr(char *src, int start, int stop);
int		count_lines(char **lines);

int	is_valid_line(char *str)
{
	if (*str < '0' || *str > '9')
		return (0);
	while (*str && (*str >= '0' && *str <= '9'))
		str++;
	while (*str == ' ')
		str++;
	if (*str != ':')
		return (0);
	str++;
	while (*str >= ' ' && *str <= '~')
		str++;
	if (*str == '\0')
		return (1);
	return (0);
}

char	**curate_dict_entry(char **pair)
{
	if (pair[0] == NULL)
	{
		free(pair);
		return (NULL);
	}
	if (pair[1] == NULL)
	{
		free(pair[0]);
		free(pair);
		return (NULL);
	}
	return (pair);
}

char	**parse_line(char *str)
{
	char	**ret;
	int		i;
	int		txt_start;

	ret = malloc(2 * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	ret[0] = ft_substr(str, 0, i);
	while (str[i] == ' ')
		i++;
	i++;
	while (str[i] == ' ')
		i++;
	txt_start = i;
	while (str[i])
		i++;
	ret[1] = ft_substr(str, txt_start, i);
	return (curate_dict_entry(ret));
}

char	***destroy_dict(char ***dict, int until)
{
	int	i;

	i = 0;
	while (i < until && dict[i] != NULL)
	{
		free(dict[i][0]);
		free(dict[i][1]);
		free(dict[i]);
		i++;
	}
	free(dict);
	return (NULL);
}

char	***ft_parse(char **lines)
{
	int		size;
	int		i;
	char	***dict;

	size = count_lines(lines);
	dict = malloc(sizeof(char **) * (size + 1));
	if (dict == NULL)
		return (destroy_dict(dict, 0));
	i = 0;
	while (i < size)
	{
		if (**lines != '\0')
		{
			if (!is_valid_line(*lines))
				return (destroy_dict(dict, i));
			dict[i] = parse_line(*lines);
			if (dict[i] == NULL)
				return (destroy_dict(dict, i));
			i++;
		}
		lines++;
	}
	dict[i] = NULL;
	return (dict);
}

/*
int main(int c, char **v)
{
	char	***dict;
	char	**lines;

	lines = malloc(4 * sizeof(char *));
	lines[0] = "0:zero";
	lines[1] = "1  :   one";
	lines[2] = NULL;
	dict = ft_parse(lines);
	printf("'%s','%s'\n", dict[0][0], dict[0][1]);
	printf("'%s','%s'\n", dict[1][0], dict[1][1]);
	free(lines);
	destroy_dict(dict, 2);
}
*/
