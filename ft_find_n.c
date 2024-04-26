/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_n.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:29:36 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 13:42:48 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	ft_find_n(t_num_list **a)
{
	int		len_of_list;
	float	n;

	len_of_list = ft_lstsize_for_pushswap(*a);
	n = 1;
	while (len_of_list > 0)
	{
		if (len_of_list <= 100)
			n *= 1.3111;
		else
			n *= 1.021;
		len_of_list -= 10;
	}
	return (n);
}
