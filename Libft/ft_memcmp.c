/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:23:43 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/01 19:02:32 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*s1, const void	*s2, size_t	n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (*str1 == *str2)
		{
			str1++;
			str2++;
			i++;
		}
		else
			return (*str1 - *str2);
	}
	return (0);
}

/*int	main(void)
{
	char	s1[] = "abcd";
	char	s2[] = "abcf";
	printf("%d", ft_memcmp(s1, s2, 4));
}*/
