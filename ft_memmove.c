/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 10:33:05 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:05:32 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp_src;
	size_t		i;

	tmp_dst = (char *)dst;
	tmp_src = (const char *)src;
	if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			tmp_dst[i] = tmp_src[i];
			i++;
		}
	}
	else if (src < dst)
	{
		while (len > 0)
		{
			len--;
			tmp_dst[len] = tmp_src[len];
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[2];
	char	*src = "Ala ma kota";
	char	*result = (char *)ft_memmove(dst, src, 2);

	printf("%s", result);
	return (0);
}
*/	
