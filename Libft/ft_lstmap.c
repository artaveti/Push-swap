/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 18:20:07 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/05 18:21:34 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void	(*del)(void *))
{
	t_list	*res;
	t_list	*tmp1;
	t_list	*tmp2;

	if (!lst || !f || !del)
		return (0);
	tmp1 = lst;
	tmp2 = ft_lstnew(f(tmp1->content));
	if (!tmp2)
		return (0);
	res = tmp2;
	tmp1 = tmp1->next;
	while (tmp1)
	{
		tmp2->next = ft_lstnew(f(tmp1->content));
		if (!tmp2->next)
		{
			ft_lstclear(&res, del);
			return (0);
		}
		tmp2 = tmp2->next;
		tmp1 = tmp1->next;
	}
	tmp2->next = 0;
	return (res);
}
