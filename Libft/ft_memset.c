/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:46:00 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/06 19:37:43 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t			i;
	unsigned char	*mas;

	mas = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		mas[i] = (unsigned char) c;
		i++;
	}
	return (b);
}

/*int	main(void)
{
	char	b[] = "123456789";
	int		c;

	c = 'a';
	memset(b+3, c, 3 * sizeof (char));
	ft_memset(b+3, c, 3 * sizeof (char));
	printf("%s\n", b);
}*/
