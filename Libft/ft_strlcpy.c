/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 17:41:38 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/02 22:43:19 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (*src && i < dstsize - 1)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	return (len);
}

/*int	main(void)
{
	char	dst[] = "123456";
	char	src[] = "abcde";

	printf("%s  %s\n", dst, src);
	printf("%zu\n", ft_strlcpy(dst, src, 4));
	printf("%s  %s\n", dst, src);
}*/
