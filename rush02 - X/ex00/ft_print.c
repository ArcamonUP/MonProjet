/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaboidin <gaboidin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:42:22 by gaboidin          #+#    #+#             */
/*   Updated: 2024/08/31 13:43:45 by gaboidin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
}

void	ft_print_dict_error(void)
{
	write(2, "Dict Error\n", 11);
}
