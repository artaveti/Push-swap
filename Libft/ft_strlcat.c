/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 21:29:55 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/07 23:39:03 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst && dst[i] && i < size)
		i++;
	while (src && src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*size_t	ft_strlcat(char	*dest, const char	*src, size_t	size)
{
	size_t 	dest_len;
	size_t	i;
	size_t	j;

	dest_len = ft_strlen(dest);
	j = dest_len;
	i = 0;
	if (dest_len < size - 1 && size > 0)
	{
		while (src[i] && dest_len + i < size - 1)
			dest[j++] = src[i++];
		dest[j] = 0;
	}
	if (dest_len >= size)
		dest_len = size;
	return (dest_len + ft_strlen(src));
}*/

/*size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	i;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = 0;
	d = ft_strlen(dst);
	while (src[i] != '\0' && d + 1 < dstsize)
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}

int	main(void)
{
	char dst[5] = "abcd";
	char src[10] = "123456789";

	printf("%lu\n", strlen(dst));
	printf("%lu\n", strlen(src));
	printf("%lu\n", strlcat(dst, src, 1));
	printf("%s\n", dst);
}*/
