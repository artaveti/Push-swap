/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:44:46 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/06 19:34:33 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*space;

	if (count == 0 || size == 0)
	{
		space = malloc(count * size);
		if (!space)
			return (0);
		return (space);
	}
	if (count > SIZE_MAX / size)
		return (0);
	space = malloc(count * size);
	if (!space)
		return (0);
	else
		ft_memset(space, '\0', count * size);
	return (space);
}

/*int	main(void)
{
	char *s;

	s = ft_calloc(0, sizeof(char));
	// printf("%c\n", *s);
}*/