/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:23:05 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 19:43:30 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *ptr, size_t n)
{
	size_t			i;
	unsigned char	*buf_ptr;

	buf_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		buf_ptr[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char buffer1[10];

    ft_bzero(buffer1, sizeof(buffer1));

    printf("Buffer 1: ");
    for (size_t i = 0; i < sizeof(buffer1); i++)
    {
	    printf("%X", (unsigned char)buffer1[i]);
    }
    printf("\n");
}*/
