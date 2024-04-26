/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_for_a.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:57:56 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_lstadd_back_for_a(t_num_list **a, char **splitted_str)
{
	int			i;
	int			splitted_str_len;
	t_num_list	*tmp;

	splitted_str_len = ft_arr_len(splitted_str);
	i = 1;
	while (i < splitted_str_len)
	{
		tmp = ft_lstnew_num(ft_atoi_for_pushswap(splitted_str[i]));
		ft_lstadd_back_for_pushswap(a, tmp);
		i++;
	}
	return ;
}
