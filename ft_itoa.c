/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 20:13:59 by elopin            #+#    #+#             */
/*   Updated: 2024/11/24 15:28:59 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_count_nbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n = n / 10;
		i += 1;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		c;

	c = ft_count_nbr(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = (char *)malloc(sizeof(char) * (c + 1));
	if (!str)
		return (NULL);
	str[c--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		str[c] = n % 10 + '0';
		n /= 10;
		c--;
	}
	return (str);
}

/*int	main()
{
	int g = -500;
	char *h = ft_itoa(g);
	
	printf("%s", h);
	free(h);
	return (0);
}*/