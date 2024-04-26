/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check_is_num_zero.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 15:00:35 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:01:01 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_error_check_is_num_zero(char *str)
{
	int	i;

	if (str[0] != '0' && str[0] != '-' && str[0] != '+')
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	if (str[0] != '0' && str[1] == '\0')
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] != '0')
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	return ;
}
