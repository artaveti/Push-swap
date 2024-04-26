/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:10:04 by artaveti          #+#    #+#             */
/*   Updated: 2023/01/31 21:32:25 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t	n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)*str == (unsigned char)c)
			return ((void *)str);
		str++;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	int s[] = {0, 1, 2, 3, 4, 5};
	unsigned char a;
	a = 65;
	printf("%s\n", ft_memchr(s, 2 + 256, 3));
	printf("%c\n", a + 100);
}*/