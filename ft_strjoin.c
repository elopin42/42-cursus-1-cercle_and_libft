/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:24:05 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 22:15:47 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned long	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen((char *)s1)])
	{
		str[i] = s2[i - ft_strlen((char *)s1)];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*int	main()
{
	char	*t1 = "test1";
	char	*t2 = "test2";
	char	*str = ft_strjoin(t1, t2);

	printf("%s", str);
	free (str);
	return (0);
}*/