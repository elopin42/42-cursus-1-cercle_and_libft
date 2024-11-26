/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:53:31 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 14:21:14 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
#include <stdlib.h>

// void	ft_up(unsigned int s, char *c);

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void    ft_up(unsigned int s, char *c)
{
	(void)  c;
	*c -= 32;
}

int	main(void)
{
	char    str[] = "voiciun test";

	printf("%s\n", str);
	ft_striteri(str, ft_up);

	printf("%s\n", str);
	return (0);
}*/