/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:09:29 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/08 20:16:21 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const	char *s)
{
	size_t	i;

	i = 0;
	if (!s[0])
		return (0);
	while (s[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	s[] = "123456";

	printf("%zu\n", ft_strlen(s));
	printf("%zu\n", strlen(s));
	return 0;
}*/
