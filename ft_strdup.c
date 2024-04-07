/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:11:59 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 19:48:19 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*p;
	int		len;

	len = ft_strlen((char *)s1);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, len + 1);
	return (p);
}
/*
#include <stdio.h>

int main(void) {
    const char *original_string = "Hello, World!";
    char *duplicate_string;

    duplicate_string = ft_strdup(original_string);

    if (duplicate_string != NULL) {
        printf("Original: %s\n", original_string);
        printf("Duplicate: %s\n", duplicate_string);

        // Don't forget to free the memory allocated by ft_strdup
        free(duplicate_string);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
