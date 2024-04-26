/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:09:16 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/19 19:00:23 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char	const	*s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	i = 0;
	j = start;
	while (j < ft_strlen(s) && i < len)
	{
		j++;
		i++;
	}
	j -= start;
	i = 0;
	sub = (char *)malloc(sizeof(char) * (j + 1));
	if (!sub)
		return (0);
	while (start < ft_strlen(s) && i < len)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

/*int	main(void)
{
	int i;
	char *s;
	char *str;

	i = 0;
	str = strdup("0123456789");
	s = ft_substr(str, 5, 7);
	while (s[i])
	{
		printf("%c\n", s[i]);
		i++;
	}
}*/
