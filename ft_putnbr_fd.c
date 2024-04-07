/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 21:26:23 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:06:58 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = -1 * n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		a = n + '0';
		write (fd, &a, 1);
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}
*/
