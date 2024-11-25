/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 12:56:36 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 18:27:23 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	i = 0;
	j = 0;
	l = 0;
	while (dest[j] && j < size)
		j++;
	while (src[l])
		l++;
	if (size <= j)
		return (l + size);
	while (src[i] && (j + i < size - 1))
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + l);
}

/*int main()
{
    char dst[14] = "r";
    char src[] = "CCCCCAAAAAAAAA";
    size_t  r;
    
    r = ft_strlcat(dst, src, 15);
    printf("%s, %s, %zu\n", src, dst, r);
    return (0);
}*/