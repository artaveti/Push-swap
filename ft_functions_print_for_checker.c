/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions_print_for_checker.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:42:49 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:01:23 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_checker.h"

void	ft_functions_print_for_checker(t_num_list **a, t_num_list **b)
{
	char	*name_of_ft;

	name_of_ft = get_next_line(STDIN_FILENO);
	while (name_of_ft != NULL)
	{
		if (ft_strlen(name_of_ft) == 3 && name_of_ft[2] == '\n')
			ft_if_function_do_it_two_letters(name_of_ft, a, b);
		else if (ft_strlen(name_of_ft) == 4 && name_of_ft[3] == '\n')
			ft_if_function_do_it_three_letters(name_of_ft, a, b);
		else
		{
			free(name_of_ft);
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		free(name_of_ft);
		name_of_ft = get_next_line(STDIN_FILENO);
	}
	free(name_of_ft);
	return ;
}
