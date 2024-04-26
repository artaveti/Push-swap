/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_longlong_atoi_for_pushswap.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 19:55:32 by artaveti          #+#    #+#             */
/*   Updated: 2023/07/28 19:55:35 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_for_pushswap.h"

long long	ft_longlong_atoi_for_pushswap(const char *str)
{
	long long	num;
	long long	minus;

	if (str == NULL)
		return (0);
	num = 0;
	minus = 1;
	while (*str && (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str == '\r' || *str == '\v' || *str == '\f'))
		str++;
	if (*str == '-')
	{
		minus *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		num = num * 10 + *str - 48;
		str++;
	}
	if (*str != '\0' && !ft_isdigit(*str))
		return (0);
	return (num * minus);
}
