/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:26:21 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 21:15:12 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen((char *)s))
	{
		dest = malloc(1);
		if (dest)
		{
			dest[0] = '\0';
			return (dest);
		}
	}
	if (start + len > (unsigned int)ft_strlen((char *)s))
		len = (unsigned int)ft_strlen((char *)s) - start;
	dest = malloc (len + 1);
	if (!dest)
		return (NULL);
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

/*int	main()
{
	char	*k;
	char	*g;

	g = "test de fou furieux";
	k = ft_substr(g, 2, 10);
	printf("%s", k);
	free (k);
	return 0;
}*/