/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:07:45 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:04:50 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The  memchr()  function  scans  the  initial n bytes of the memory area
//pointed to by s for the first instance of c.  Both c and the  bytes  of
//the memory area pointed to by s are interpreted as unsigned char.
#include "libft.h"
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
    const char str[] = "Hello, World!";
    int search_char = 'W';
    size_t str_len = sizeof(str) - 1;  // -1 to pominięcie znaku null terminatora

    void *result = ft_memchr(str, search_char, str_len);

    if (result != NULL) {
        printf("'%c',%ld.\n", search_char, (size_t)((char *)result - str));
    } else {
        printf("Nie znaleziono znaku '%c' w ciągu znaków.\n", search_char);
    }

    return 0;
}*/
