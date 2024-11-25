/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:24:29 by elopin            #+#    #+#             */
/*   Updated: 2024/11/24 15:45:08 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	{
		i = 0;
		len = ft_strlen(s);
		while (i < len)
		{
			if (s[i] == (char)c)
				break ;
			i++;
		}
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		return (NULL);
	}
}

/*int main()
{
	char	test[100] = "voici un test";

	printf("%s, %s\n", test, ft_strchr(test, 'i'));
	return (0);
}*/