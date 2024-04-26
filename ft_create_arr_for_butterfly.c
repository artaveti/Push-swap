/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_arr_for_butterfly.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:17:28 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

int	*ft_create_arr_for_butterfly(t_num_list **a)
{
	int			i;
	int			*ordered;
	t_num_list	*tmp;

	ordered = (int *)malloc(sizeof(int) * (ft_lstsize_for_pushswap(*a)));
	if (!ordered)
	{
		return (NULL);
	}
	tmp = *a;
	i = 0;
	while (tmp->next != NULL)
	{
		ordered[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	ordered[i] = tmp->content;
	ft_arr_sort(ordered, a);
	return (ordered);
}
