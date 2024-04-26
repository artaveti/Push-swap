/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:59:39 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 15:48:00 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_lstiter_printf(t_num_list	*list,	int (f)(const char *, ...))
{
	t_num_list	*tmp;

	if (!list || !f)
		return ;
	tmp = list;
	while (tmp != NULL)
	{
		f("TMP_CONTENT:::%d\n", tmp->content);
		tmp = tmp->next;
	}
	return ;
}
