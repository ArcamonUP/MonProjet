/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_printer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 16:40:34 by kbaridon          #+#    #+#             */
/*   Updated: 2024/09/01 20:15:08 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_len(char *str);
void	print_one_num(char *nbr, char ***dict);
char	*print_three_num(char *nbr, char ***dict);
char	*print_two_num(char *nbr, char ***dict);
char	*print_nbr(char *nbr, char ***dict);
void	put_str(char *str);
char	*ft_read_dict(char ***dict, char *key);

char	*recursive_printer(char *nbr, char ***dict)
{
	if (nbr[0] == '0' && nbr[1] == '\0')
	{
		put_str(ft_read_dict(dict, "0"));
		write(1, "\n", 1);
		return (NULL);
	}
	if (ft_len(nbr) <= 0)
	{
		write(1, "\n", 1);
		return (NULL);
	}
	return (recursive_printer(print_nbr(nbr, dict), dict));
}

void	print_size(int size, char ***dict)
{
	char	key[40];
	int		i;

	if (size < 3)
		return ;
	size = size % 39;
	key[0] = '1';
	i = 1;
	while (i <= size)
	{
		key[i] = '0';
		i++;
	}
	key[i] = '\0';
	put_str(ft_read_dict(dict, key));
}

char	*print_nbr(char *nbr, char ***dict)
{
	int		size;
	int		num;

	size = (((ft_len(nbr) - 1) / 3) * 3);
	num = ft_len(nbr) % 3;
	if (nbr[0] == '0' && nbr[1] == '0' && nbr[2] == '0' && size != 36)
		return (nbr + 3);
	if (num == 0)
		nbr = (print_three_num(nbr, dict));
	else if (num == 2)
		nbr = (print_two_num(nbr, dict));
	else
	{
		print_one_num(nbr, dict);
		nbr++;
	}
	print_size(size, dict);
	return (nbr);
}

void	put_str(char *str)
{
	int	i;

	if (str == NULL)
		return ;
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
}

/*
char    **ft_read_file(char *fileName, char ***ret);
void    free_lines(char **arr);
char    ***ft_parse(char **lines);

int	main(void)
{
	char ***dict;
	char **lines;

	lines = ft_read_file("numbers.dict", &lines);
	dict = ft_parse(lines);

	recursive_printer("12312312312387612983761927312631782369178263", dict);
	free_lines(lines);
}
*/
