/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:09:43 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 17:50:54 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) > start)
	{
		if (len > ft_strlen(s) - start)
			len = ft_strlen(s) - start;
	}
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	p[len] = '\0';
	return (p);
}
/*
#include <stdio.h>

int main(void) {
    const char *or_string = "Hello, World!";
    unsigned int start_pos = 7;
    size_t substr_length = 5;

    char *substring = ft_substr(or_string, start_pos, substr_length);

    if (substring != NULL) {
        printf("Original: %s\n", original_string);
        printf("Substring: %s\n", substring);

        // Don't forget to free the memory allocated by ft_substr
        free(substring);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
