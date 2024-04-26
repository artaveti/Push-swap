/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:28:33 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/07 23:38:30 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;

	if (!haystack && len == 0)
		return (0);
	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (*haystack != '\0' && i < len)
	{
		while (needle[j] != '\0' && *haystack == needle[j] && i + j < len)
		{
			haystack++;
			j++;
		}
		haystack -= j;
		if (j == ft_strlen(needle))
			return ((char *)haystack);
		j = 0;
		i++;
		haystack++;
	}
	return (0);
}

/*int	main(void)
{
	char haystack[4] = "";
	char needle[2] = "b";

	printf("%s\n",ft_strnstr(haystack, needle, 0));
	printf("%s\n",strnstr(haystack, needle, 0));
}*/

/*char	*ft_strnstr(const char	*big, const char	*little, size_t	len)
{
	size_t	n;

	if (big == NULL && len == 0)
		return (NULL);
	if (*little == 0)
		return ((char *) big);
	n = ft_strlen(little);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
			return ((char *) big);
			++big;
			--len;
	}
	return (NULL);
}*/

/*char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0' || haystack == needle)
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (*haystack != '\0' && i < len)
	{
		while (*needle != '\0' && *haystack == *needle && i + j < len)
		{
			haystack++;
			needle++;
			j++;	
		}
		haystack -= j;
		needle -= j;
		if (j == ft_strlen(needle))
			return ((char *)haystack);
		j = 0;
		i++;
		haystack++;
	}
	return (0);
}*/
