/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:18:58 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 02:06:40 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char	*s, int l )
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char) l)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

/*int main()
{
	char	test[100] = "bonjour";

	printf("%s, %s\n", test, ft_strrchr(test, 'b'));
	return (0);
}*/