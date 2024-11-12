/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:53:54 by elopin            #+#    #+#             */
/*   Updated: 2024/11/12 16:46:00 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned long	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/*int	main()
{
	char	test[5] = "onjo";
	char	test1[5] = "onjo";
	ft_bzero(test, 2);
	bzero(test1, 3);
	printf("%s", test);
	printf("%s\n", test1);
	return (0);
}*/
