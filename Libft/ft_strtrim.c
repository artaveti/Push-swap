/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 20:11:50 by artaveti          #+#    #+#             */
/*   Updated: 2023/02/19 18:00:25 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_find(char s1Char, char const	*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (s1Char == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*res;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (0);
	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (ft_char_find(s1[start], set))
		start++;
	while (end > start && ft_char_find(s1[end - 1], set))
		end--;
	res = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!res)
		return (0);
	while (start < end)
	{
		res[i] = s1[start];
		start++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int main(void)
{
	printf("%s\n", ft_strtrim("   aaa aaa", " a"));
}*/