/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 12:54:10 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 14:05:39 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

//#include <stdio.h>

//char	ft_up(unsigned int s, char c);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*o;

	i = 0;
	o = 0;
	o = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!o)
		return (NULL);
	while (s[i])
	{
		o[i] = f(i, (char)s[i]);
		i++;
	}
	o[i] = '\0';
	return (o);
}

/*char    ft_up(unsigned int s, char c)
{
	(void)  c;
	c -= 32;
	return (c);
}

int	main(void)
{
	char    *str = "voici un test";
	char    *s = ft_strmapi(str, ft_up);

	printf("%s, %s", str, s);
	free(s);
	return (0);
}*/