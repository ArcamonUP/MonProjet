/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaboidin <gaboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:38:57 by gaboidin          #+#    #+#             */
/*   Updated: 2024/09/01 19:00:14 by rarangur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTION_H
# define FUNCTION_H

# include <unistd.h>

void	ft_print_dict_error(void);

void	ft_print_error(void);

char	**ft_read_file(char *filename, char ***ret);

void	ft_solve(char *filename, char *nbr);

int		is_valid_number(char *nbr);

char	***ft_parse(char **lines);

char	*ft_read_dict(char ***dict, char *key);

char	*recursive_printer(char *nbr, char ***dict);

char	*number_without_leading_zero(char *nbr);

char	***ft_parse(char **lines);

char	*ft_read_dict(char ***dict, char *key);

int		validate_dict(char ***dict);

#endif
