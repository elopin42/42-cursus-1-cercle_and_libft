/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 17:42:17 by elopin            #+#    #+#             */
/*   Updated: 2024/11/25 20:17:01 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//#include <stdio.h>
int	ft_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	if (!s || !*s)
		return (0);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_free(char **tab, int i)
{
	while (i > 0)
		free(tab[i--]);
	free(tab);
	return (NULL);
}

int	ft_s2(char const *s, char c)
{
	int	b;

	b = 0;
	while (s[b] && s[b] != c)
		b++;
	return (b);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		b;

	i = 0;
	b = 0;
	tab = (char **)malloc((ft_count(s, c) + 1) * sizeof(char *));
	if (!tab || !s)
		return (ft_free(tab, i));
	while (*s && tab != NULL)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			b = ft_s2(s, c);
			tab[i] = ft_substr(s, 0, b);
			if (!tab[i])
				return (ft_free(tab, i));
			s += b;
			i++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

/*int	main(void)
{
	char	str[29] = " bon jour lle coyote";
	char	c = ' ';
	char	**tab = ft_split(str, c);
	int		i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/