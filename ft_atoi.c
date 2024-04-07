/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 15:13:17 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/15 13:48:11 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	white_spaces(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (9 <= str[i] && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

static int	ft_sign(const char *str)
{
	int	i;

	i = white_spaces(str);
	if (str[i] == '-')
		return (1);
	if (str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int	a;
	int	i;

	if (ft_sign(str) == 1)
	{
		i = white_spaces(str) + 1;
		a = 0;
		while ('0' <= str[i] && str[i] <= '9')
			a = a * 10 + (str[i++] - 48);
		a = (-1) * a;
		return (a);
	}
	if (ft_sign(str) == 0)
	{
		i = white_spaces(str);
		if (str[i] == '+')
			i++;
		a = 0;
		while ('0' <= str[i] && str[i] <= '9')
			a = a * 10 + (str[i++] - 48);
		return (a);
	}
	else
		return (0);
}
/*
int	main(void)
{
	printf("%d", ft_atoi("+5"));
	return (0);
}
*/
