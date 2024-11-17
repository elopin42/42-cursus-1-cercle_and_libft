/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:24:29 by elopin            #+#    #+#             */
/*   Updated: 2024/11/16 23:15:26 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

char	*ft_strchr(const char *s, int sb)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)sb)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && sb == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int main()
{
	char	test[100] = "voici un test";

	printf("%s, %s\n", test, ft_strchr(test, 'i'));
	return (0);
}*/