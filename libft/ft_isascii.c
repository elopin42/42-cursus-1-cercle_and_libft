/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:17:52 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 17:13:50 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*int	main(int ac, char **av)
{
	(void) ac;

	if (ft_isascii(*av[1]) > 0)
		printf("%c good", *av[1]);
	else
		printf("%c bad", *av[1]);
	return (0);
}*/
