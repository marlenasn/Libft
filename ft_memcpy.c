/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:01:43 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 19:38:38 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*tmp_dst;
	char	*tmp_src;
	size_t	i;

	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	if (!dst && !src)
		return (dst);
	i = 0;
	while (i < n)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[20];
	char	*src = "Ala ma kota";
	char	*result = (char *)ft_memcpy(dst, src, 5);
	
	printf("%s", result);
	return (0);
}
*/
