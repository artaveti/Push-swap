/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb_rb_in_butterfly.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 17:57:02 by artaveti          #+#    #+#             */
/*   Updated: 2023/08/02 17:57:04 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_pb_rb_in_butterfly(int *counter, t_num_list **a, t_num_list **b)
{
	ft_pb(a, b);
	ft_rb(b);
	*counter = *counter + 1;
	return ;
}
