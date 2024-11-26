/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 21:45:00 by elopin            #+#    #+#             */
/*   Updated: 2024/11/26 17:56:02 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static int	ft_trie_valid(const char c, const char	*set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*str;

	i = 0;
	start = 0;
	while (s1[start] && ft_trie_valid(s1[start], set))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end > start && ft_trie_valid(s1[end], set))
		end--;
	end += 1;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

/*int main()
{
	char *s = "abcdefgbca";
	char *l = "bca";
	
	char *g = ft_strtrim(s, l);
	printf("%s, %s, %s", s, l, g);
	free (g);
	return (0);
}*/