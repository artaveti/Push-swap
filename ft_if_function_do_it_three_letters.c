/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_function_do_it_three_letters.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:30:32 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 16:31:07 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_if_function_do_it_three_letters(char *name_of_ft,
		t_num_list **a, t_num_list **b)
{
	if (name_of_ft[0] == 'r' && name_of_ft[1] == 'r'
		&& name_of_ft[2] == 'a')
		ft_rra_for_checker(a);
	else if (name_of_ft[0] == 'r' && name_of_ft[1] == 'r'
		&& name_of_ft[2] == 'b')
		ft_rrb_for_checker(b);
	else if (name_of_ft[0] == 'r' && name_of_ft[1] == 'r'
		&& name_of_ft[2] == 'r')
		ft_rrr_for_checker(a, b);
	else
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return ;
}
