/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check_in_atoi.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:25:17 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:03:13 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_error_check_in_atoi(char **splitted_str)
{
	int	split_count;

	split_count = 0;
	while (splitted_str[split_count] != NULL)
	{
		ft_error_check_is_num_int(splitted_str[split_count]);
		if (ft_atoi_for_pushswap(splitted_str[split_count]) == 0)
			ft_error_check_is_num_zero(splitted_str[split_count]);
		split_count++;
	}
	if (split_count == 0)
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return ;
}
