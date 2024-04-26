/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 19:31:39 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/01 19:33:23 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*res;
	size_t	i;

	if (!s || !f)
		return (0);
	res = malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (!res)
		return (0);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

/*int main(void)
{
    char s[4] = "abc";
    printf("%s\n", ft_strmapi(s, f));
}*/
