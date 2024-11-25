/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:53:46 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 17:20:11 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	unsigned long		i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	if (count == 0)
		return (dest);
	while (i <= count - 1)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

/*int	main()
{
	char 	test[10];

	ft_memset(test, 'j', 5);
	ft_memset(test + 5, 'k', 5);
	printf("%s\n", test);
	memset(test, 'j', 4);
	memset(test + 4, 'k', 6);
	printf("%s\n", test);
	return (0);
}*/
