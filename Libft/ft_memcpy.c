/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:48:01 by artaveti          #+#    #+#             */
/*   Updated: 2023/01/31 19:16:11 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t	i;
	char	*d;
	char	*s;

	if ((!dst && !src) || n == 0)
		return (dst);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "abcdef";
	char	dst[] = "123465";

	memcpy(dst + 1, src + 2, 2);
	ft_memcpy(dst + 1, src + 2, 2);
	printf("%s\n%s\n", src, dst);
	return 0;
}*/
