/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_check_space_null.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:28:32 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/28 19:28:33 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

void	ft_error_check_space_null(int argc, char *argv[])
{
	int		i;
	size_t	j;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		j = 0;
		while (argv[i][j] == ' ')
		{
			j++;
			if (j == ft_strlen(argv[i]))
			{
				write(2, "Error\n", 6);
				exit(EXIT_FAILURE);
			}
		}
		i++;
	}
	return ;
}
