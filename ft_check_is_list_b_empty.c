/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_is_list_b_empty.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:32:35 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 16:32:36 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_check_is_list_b_empty(t_num_list **b)
{
	if (ft_lstsize_for_pushswap(*b) > 0)
	{
		write(1, "KO\n", 3);
		exit(EXIT_FAILURE);
	}
	return ;
}
