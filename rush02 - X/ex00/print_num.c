/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 21:55:06 by kbaridon          #+#    #+#             */
/*   Updated: 2024/09/01 21:55:09 by kbaridon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_one_num(char *nbr, char ***dict);
char	*print_three_num(char *nbr, char ***dict);
char	*print_two_num(char *nbr, char ***dict);
void	put_str(char *str);
char	*ft_read_dict(char ***dict, char *key);

void	print_one_num(char *nbr, char ***dict)
{
	char	unit[2];

	unit[0] = nbr[0];
	unit[1] = '\0';
	put_str(ft_read_dict(dict, unit));
}

char	*print_three_num(char *nbr, char ***dict)
{
	if (nbr[0] != '0')
	{
		print_one_num(nbr, dict);
		put_str(ft_read_dict(dict, "100"));
	}
	if (nbr[1] == '0' && nbr[2] == '0')
		return (nbr + 3);
	return (print_two_num(nbr + 1, dict));
}

char	*print_two_num(char *nbr, char ***dict)
{
	char	tens[3];

	if (nbr[0] == '0')
	{
		put_str(ft_read_dict(dict, &nbr[1]));
		return (nbr + 2);
	}
	tens[0] = nbr[0];
	if (nbr[0] == '1')
	{
		tens[1] = nbr[1];
		tens[2] = '\0';
		put_str(ft_read_dict(dict, tens));
		return (nbr + 2);
	}
	tens[1] = '0';
	tens[2] = '\0';
	put_str(ft_read_dict(dict, tens));
	if (nbr[1] != '0')
		print_one_num(nbr + 1, dict);
	return (nbr + 2);
}
