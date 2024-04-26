/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check_duplic.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:21:36 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:03:08 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_error_check_duplic(char **splitted_str)
{
	int	i;
	int	j;

	i = 0;
	while (splitted_str[i] != NULL)
	{
		j = i + 1;
		if (splitted_str[j] == NULL)
			return ;
		while (splitted_str[j] != NULL)
		{
			if (ft_atoi_for_pushswap(splitted_str[i])
				== ft_atoi_for_pushswap(splitted_str[j]))
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
			j++;
		}
		i++;
	}
	return ;
}
