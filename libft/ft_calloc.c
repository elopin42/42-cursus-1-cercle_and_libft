/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:36:49 by elopin            #+#    #+#             */
/*   Updated: 2024/11/18 18:48:35 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t ec, size_t es)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = malloc(ec * es);
	if (!ptr)
		return (NULL);
	while (((unsigned char *)ptr)[i])
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*int	main()
{
	long *nbr;

	nbr = NULL;

	nbr = (long *)ft_calloc(10, sizeof(long));
	if (nbr != NULL)
		printf("good");
	else
		printf("bd");
}*/