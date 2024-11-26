/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:26:21 by elopin            #+#    #+#             */
/*   Updated: 2024/11/26 18:09:11 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new_str = (char *)malloc(1);
		if (!new_str)
			return (NULL);
		new_str[0] = '\0';
		return (new_str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/*int	main(void)
{
	char	*k;
	char	*g;

	g = "test de fou furieux";
	k = ft_substr(g, 2, 10);
	printf("%s", k);
	free (k);
	return (0);
}*/