/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_argv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:51:50 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/28 19:54:42 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

char	*ft_join_argv(int argc, char *argv[])
{
	int		i;
	char	*tmp;
	char	*joined_str;

	joined_str = (char *)malloc(sizeof(char) * 2);
	if (!joined_str)
		exit(EXIT_FAILURE);
	joined_str[0] = ' ';
	joined_str[1] = '\0';
	i = 1;
	while (i < argc)
	{
		tmp = joined_str;
		joined_str = ft_strjoin(joined_str, argv[i]);
		free(tmp);
		tmp = joined_str;
		joined_str = ft_strjoin(joined_str, " ");
		free(tmp);
		i++;
	}
	return (joined_str);
}
