/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 21:15:44 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 18:00:13 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include "libft.h"
//#include <stdio.h>

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (s[i])
		i++;
	l = i;
	if (n == 0)
		return (l);
	i = 0;
	while (i < n -1 && s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (l);
}

/*int	main()
{
	char	string[] = "lorem ipsum dolor sit amet";
	char	buffer[40];
	size_t	r;

	r = ft_strlcpy(buffer, string, 0);
	printf("%s, %s, %zu", string, buffer, r);
	return (0);
}*/