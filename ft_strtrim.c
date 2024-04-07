/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 19:57:28 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:12:40 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	if_char_in_set(char const *set, char const c)
{
	if (!set)
		return (0);
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

int	str_len(char const *str)
{
	int	i;

	i = 0;
	while (*(str + i))
	{
		i++;
	}
	return (i);
}

static char	*str_mem_alloc(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (*(s1 + start) && if_char_in_set(set, *(s1 + start)))
		start++;
	end = str_len(s1);
	while (end > start && if_char_in_set(set, *(s1 + (end - 1))))
		end--;
	new_str = str_mem_alloc(end - start);
	if (!new_str)
		return (NULL);
	i = 0;
	while ((start + i) < end)
	{
		*(new_str + i) = *(s1 + (start + i));
		i++;
	}
	*(new_str + i) = '\0';
	return (new_str);
}
/*
#include <stdio.h>

int main()
{
    char input_string[] = "   \t  Trim this string  \t  \n";
    char trim_chars[] = " \t\n";

    char *trimmed_str = ft_strtrim(input_string, trim_chars);

    // Printing the trimmed string
    printf("Original string: \"%s\"\n", input_string);
    printf("Trimmed string:  \"%s\"\n", trimmed_str);

    return 0;
}
*/
