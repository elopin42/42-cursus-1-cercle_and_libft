/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 21:40:09 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 14:20:20 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strncmp( const char *f, const char *s, size_t l )
{
	size_t	i;

	i = 0;
	if (l == 0)
		return (0);
	while (i < (l - 1))
	{
		if (f[i] != s[i] || f[i] == '\0' || s[i] == '\0')
			break ;
		i++;
	}
	return ((unsigned char)f[i] - (unsigned char)s[i]);
}

/*int	main()
{
	char	fi[50] = "test\200";
	char	se[50] = "test\0";
	int		le = 0;
	int		l = 6;
	
	le = ft_strncmp(fi, se, l);
	printf("%s, %s, %d, %d", fi, se, l, le);
	return (0);
}*/