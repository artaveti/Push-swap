/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 17:24:20 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/14 19:54:33 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int c)
{
	size_t	len;
	char	*p;

	p = 0;
	len = 0;
	while (s[len])
	{
		if (s[len] == (char) c)
			p = (char *)(s + len);
		len++;
	}
	if (s[len] == (char) c)
		p = (char *)(s + len);
	return (p);
}

/*int	main(void)
{
	char	s[10] = "abcd abcd";

	//char *p;
	//char *t;

	//p = s;
	//t = s;
	printf("%s\n", ft_strrchr(s, '5'));
	///printf("%p\n", p);
	//printf("%p\n", t);
	//printf("%d", p == t);
}*/
