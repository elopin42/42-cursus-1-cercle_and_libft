/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 23:47:12 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 18:02:51 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
//#include <stdio.h>

int	ft_memcmp( const void	*p1, const void	*p2, size_t s )
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t				i;

	s1 = (const unsigned char *)p1;
	s2 = (const unsigned char *)p2;
	i = 0;
	if (s == 0)
		return (0);
	while (i < (s - 1))
	{
		if (s1[i] != s2[i] && s1[i])
			break ;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main()
{
	char	t1[] = "test1";
	char	t2[] = "test1";

	printf("%s, %s, %d", t1, t2, ft_memcmp(t1, t2, 100));
	return (0);
}*/