/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:48:32 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 18:28:50 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*result;

	i = 0;
	result = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			result = (char *)s + i;
		i++;
	}
	if (s[i] == (char)c)
		result = (char *)s + i;
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "Ala ma kotaaa";
	printf("%s", ft_strrchr(str, 'a'));
	return (0);
}
*/	
