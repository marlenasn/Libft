/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:48:37 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/15 16:21:32 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	int		i;

	new_str = (char *)malloc((ft_str_len((char *)s) + 1) * sizeof(char));
	i = 0;
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
#include <stdio.h>

char    str_up(unsigned int i, char c)
{
        (void)i;
        if (c >= 'a' && c <= 'z')
                c = c - ('a' - 'A');
        return (c);
}

int	main(void)
{
    char input[] = "Ala ma kota";

    // Użycie ft_strmapi do zmiany małych liter na duże
    char *result = ft_strmapi(input, str_up);

    // Wyświetlenie wyniku
    printf("Original string: %s\n", input);
    printf("Modified string: %s\n", result);

    // Zwolnienie zaalokowanej pamięci
    free(result);

    return 0;
}
*/
