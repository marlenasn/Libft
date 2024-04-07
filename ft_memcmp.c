/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:23:46 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 19:39:54 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1_copy[i] != s2_copy[i])
			return (s1_copy[i] - s2_copy[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	nbr1 = 845654;
	int	nbr2= 98435732;

	printf("%d", ft_memcmp("dla" , "bdsa", 4));
	printf("%d", ft_memcmp(&nbr1, &nbr2, 4));
	return (0);
}*/
