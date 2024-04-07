/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 18:17:41 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/15 16:18:45 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/*
static int	num_of_digits(long n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*mem_alloc(int n)
{
	char	*str;

	if (n == 0)
		str = (char *)malloc(num_of_digits(n) * sizeof(char));
	else
		str = (char *)malloc((num_of_digits(n) + 1) * sizeof(char));
	return (str);
}

static long	abs_value(long n)
{
	if (n > 0)
		return (n);
	else
		return (-1 * n);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		len;
	int		sign;
	long	number;

	len = num_of_digits((long)n);
	sign = (int)(n < 0);
	s = mem_alloc(len + sign);
	if (!s)
		return (NULL);
	number = abs_value((long)n);
	s[len + sign] = '\0';
	while (len--)
	{
		s[len + sign] = number % 10 + '0';
		number = number / 10;
	}
	if (sign)
		s[0] = '-';
	return (s);
}*/
static size_t	num_of_digits(int n)
{
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char		*str_num;
	size_t		digits;
	long int	num;

	num = n;
	digits = num_of_digits(n);
	if (n < 0)
	{
		num = num * -1;
		digits++;
	}
	str_num = (char *)malloc(sizeof(char) * (digits + 1));
	if (!str_num)
		return (NULL);
	*(str_num + digits) = 0;
	while (digits--)
	{
		*(str_num + digits) = num % 10 + '0';
		num = num / 10;
	}
	if (n < 0)
		*(str_num + 0) = '-';
	return (str_num);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(9));
	printf("%s\n", ft_itoa(-9));
	printf("%s\n", ft_itoa(10));
	printf("%s\n", ft_itoa(-10));
	printf("%s\n", ft_itoa(8124));
	printf("%s\n", ft_itoa(-9874));
	printf("%s\n", ft_itoa(543000));
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}*/
