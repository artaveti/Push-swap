/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <artaveti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 19:58:46 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/29 18:29:32 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_start(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] == c && s[i])
		i++;
	return (i);
}

static	size_t	ft_words_count(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i])
		{
			i++;
		}
		if (s[i] != c && s[i])
		{
			count++;
			while (s[i] != c && s[i])
			{
				i++;
			}
		}
	}
	return (count);
}

static void	ft_malloc_for_word(char **strs, const char	*s, char c)
{
	size_t	words;
	size_t	st;
	size_t	chars_count;
	size_t	start;

	words = ft_words_count(s, c);
	st = 0;
	chars_count = 0;
	start = ft_start(s, c);
	while (words-- > 0)
	{
		if (s[start])
		{
			while (s[start] == c && s[start])
				start++;
			while (s[start] != c && s[start])
			{
				chars_count++;
				start++;
			}
			strs[st++] = malloc(sizeof(char) * (chars_count + 1));
		}
		chars_count = 0;
	}
	strs[st] = 0;
}

char	**ft_split(char const	*s, char c)
{
	char	**strs;
	size_t	st;
	size_t	i;
	size_t	l;

	if (!s)
		return (0);
	strs = (char **)malloc(sizeof(char *) * (ft_words_count(s, c) + 1));
	if (!strs)
		return (0);
	ft_malloc_for_word(strs, s, c);
	st = 0;
	i = 0;
	l = 0;
	while (st < ft_words_count(s, c))
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
			strs[st][l++] = s[i++];
		strs[st][l] = '\0';
		l = 0;
		st++;
	}
	return (strs);
}
/*int	main(void)
{
	printf("%s\n", ft_split("", ' ')[0]);
	printf("%ld\n", 0x7f8700400650);
}*/
