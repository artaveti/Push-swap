/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_ascending_for_checker.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:48:23 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/30 16:16:07 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_is_ascending_for_checker(t_num_list **a)
{
	t_num_list	*tmp;

	tmp = *a;
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
		{
			write(1, "KO\n", 3);
			exit(EXIT_SUCCESS);
		}
		tmp = tmp->next;
	}
	write(1, "OK\n", 3);
	exit(EXIT_SUCCESS);
}
