/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_function_do_it_two_letters.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:28:16 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 16:29:14 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_if_function_do_it_two_letters(char *name_of_ft,
		t_num_list **a, t_num_list **b)
{
	if (name_of_ft[0] == 's' && name_of_ft[1] == 'a')
		ft_sa_for_checker(*a);
	else if (name_of_ft[0] == 's' && name_of_ft[1] == 'b')
		ft_sb_for_checker(*b);
	else if (name_of_ft[0] == 's' && name_of_ft[1] == 's')
		ft_ss_for_checker(*a, *b);
	else if (name_of_ft[0] == 'p' && name_of_ft[1] == 'a')
		ft_pa_for_checker(a, b);
	else if (name_of_ft[0] == 'p' && name_of_ft[1] == 'b')
		ft_pb_for_checker(a, b);
	else if (name_of_ft[0] == 'r' && name_of_ft[1] == 'a')
		ft_ra_for_checker(a);
	else if (name_of_ft[0] == 'r' && name_of_ft[1] == 'b')
		ft_rb_for_checker(b);
	else if (name_of_ft[0] == 'r' && name_of_ft[1] == 'r')
		ft_rr_for_checker(a, b);
	else
	{
		write(2, "Error\n", 6);
		exit(EXIT_FAILURE);
	}
	return ;
}
