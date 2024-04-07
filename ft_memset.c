/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:35:57 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 19:36:40 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;
	unsigned char	*buf_ptr;

	buf_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		buf_ptr[i] = x;
		i++;
	}
	return (ptr);
}
/*
#include <stdio.h>
#include <string.h>

int main() 
{
	char buffer1[10];

    ft_memset(buffer1, 1, sizeof(buffer1));

    printf("Buffer 1: ");
    for (size_t i = 0; i < sizeof(buffer1); i++) 
    {
	    printf("%X", (unsigned char)buffer1[i]);
    }
    printf("\n");
}*/
