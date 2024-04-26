/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:40:34 by artaveti          #+#    #+#             */
/*   Updated: 2023/01/31 19:11:47 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') 
			|| (c >= 'A' && c <= 'Z') 
			|| (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}*/

/*int	main(void)
{
	unsigned char	c;

	c = '*';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));
}*/
