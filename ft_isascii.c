/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:20:33 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:03:38 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (0 <= c && c <= 127);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_isascii('b'));
	printf("%d", ft_isascii('-'));
	printf("%d", ft_isascii(' '));
}*/
