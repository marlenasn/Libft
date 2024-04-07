/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:47:05 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/13 12:13:43 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	a;

	if ('a' <= c && c <= 'z')
	{
		a = c - 32;
		return (a);
	}
	else
		return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c", toupper('f'));
	return (0);
}*/
