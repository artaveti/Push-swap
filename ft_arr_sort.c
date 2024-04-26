/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:15:54 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_arr_sort(int *arr, t_num_list **a)
{
	int	i;
	int	j;
	int	tmp;
	int	len;

	if (!arr || !a)
		return ;
	len = ft_lstsize_for_pushswap(*a);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (arr[j] > arr[i])
			{
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return ;
}
