/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artaveti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 20:57:23 by artaveti          #+#    #+#             */
/*   Updated: 2023/03/02 20:57:48 by artaveti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int i, int fd)
{
	char	n;

	if (i == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (i < 0)
		{
			write (fd, "-", 1);
			i *= -1;
			ft_putnbr_fd(i, fd);
		}
		else if (i < 10)
		{
			n = i + 48;
			write(fd, &n, 1);
		}
		else
		{
			ft_putnbr_fd(i / 10, fd);
			n = (i % 10) + 48;
			write(fd, &n, 1);
		}
	}
}
