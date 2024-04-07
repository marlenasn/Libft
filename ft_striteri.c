/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:02:19 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:09:48 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	str_up(unsigned int i, char *str)
{
	(void)i;
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
}
#include <stdio.h>

int	main(void)
{
    char input[] = "aaaaaaaaa";

    printf("Original string: %s\n", input);

    // Użycie ft_striteri do zmiany liter na duże
    ft_striteri(input, str_up);

    printf("Modified string: %s\n", input);

    return (0);
}
*/
