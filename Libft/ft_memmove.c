/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:22:23 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/05 21:54:02 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t	len)
{
	size_t	i;

	if (dst == src)
		return (dst);
	if (dst > src)
	{
		i = len;
		while (i--)
		{
			((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
		}
		return (dst);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)(dst))[i] = ((unsigned char *)(src))[i];
			i++;
		}
		return (dst);
	}
}

/*int	main(void)
{
	char	dst[] = "11111111111";
	char	src[] = "abcdef";

  ft_memmove(dst, src, 3);
	//memmove(dst, src, 2);
	printf("%s\n%s\n", dst, src);
}*/
