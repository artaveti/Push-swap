/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:42:48 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/09 20:48:33 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*dup;

	dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (0);
	ft_strlcpy(dup, s1, ft_strlen(s1) + 1);
	return (dup);
}

/*int	main(void)
{
	char	*str;
	char	s1[] = "abcdef";

	str = ft_strdup(s1);
	printf("%s\n", str);
}*/
