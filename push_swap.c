/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 20:38:36 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 18:25:32 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	main(int argc, char *argv[])
{
	char		*joined_str;
	char		**splitted_str;
	int			splitted_str_len;
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
	ft_is_ascending(&a);
	splitted_str_len = ft_arr_len(splitted_str);
	if (splitted_str_len <= 5)
	{
		ft_for_less_or_equal_5(splitted_str_len, &a, &b);
		exit(EXIT_SUCCESS);
	}
	ft_butterfly(&a, &b);
	exit(EXIT_SUCCESS);
}
