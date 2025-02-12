/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 22:44:55 by elopin            #+#    #+#             */
/*   Updated: 2024/11/24 15:29:45 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *ts)
{
	int	k;
	int	i;
	int	s;

	i = 0;
	k = 0;
	s = 1;
	while ((ts[i] >= 9 && ts[i] <= 13) || ts[i] == 32)
		i++;
	if (ts[i] == '-' || ts[i] == '+')
	{
		if (ts[i] == '-')
			s *= -1;
		i++;
	}
	while (ts[i] >= '0' && ts[i] <= '9')
	{
		k = (k * 10) + ts[i] - '0';
		i++;
	}
	if (k * s >= 2147483647)
		return (2147483647);
	if (k * s <= -2147483648)
		return (-2147483648);
	return (k * s);
}

/*int	main(void)
{
	char l[] = "   --2147483647";

	printf("%d", ft_atoi(l));
	return (0);
}*/