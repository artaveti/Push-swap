/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 16:45:53 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 19:02:19 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"
#include "lib_for_checker.h"

int	main(int argc, char *argv[])
{
	char		*joined_str;
	char		**splitted_str;
	t_num_list	*a;
	t_num_list	*b;

	ft_argv_quant_check(argc);
	ft_error_check_space_null(argc, argv);
	joined_str = ft_join_argv(argc, argv);
	splitted_str = ft_split(joined_str, ' ');
	ft_error_check_in_atoi(splitted_str);
	ft_error_check_duplic(splitted_str);
	a = ft_lstnew_num(ft_atoi_for_pushswap(splitted_str[0]));
	ft_lstadd_back_for_a(&a, splitted_str);
	ft_functions_print_for_checker(&a, &b);
	ft_check_is_list_b_empty(&b);
	ft_is_ascending_for_checker(&a);
	exit(EXIT_SUCCESS);
}
	//system("leaks checker");