/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:47:50 by mwiecek           #+#    #+#             */
/*   Updated: 2024/03/14 17:30:36 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (count && size && count > (4294967295 / size))
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	else
	{
		ft_memset(p, 0, count * size);
		return (p);
	}
}
/*
#include <stdio.h>

int main(void)
{
    size_t count = 5;
    size_t size = sizeof(int);

    int *arr = (int *)ft_calloc(count, size);

    if (arr != NULL)
    {
        printf("Memory allocated successfully.\n");

        // Do something with the allocated memory, e.g., initialize values
        for (size_t i = 0; i < count; i++)
        {
            printf("%d", arr[i]);
        }
        // Don't forget to free the allocated memory
        free(arr);
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
