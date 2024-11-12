/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 21:40:02 by elopin            #+#    #+#             */
/*   Updated: 2024/11/11 21:46:48 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int	main(int ac, char **av)
{
	(void) ac;

	if (ft_isdigit(*av[1]))
		printf("%c good", *av[1]);
	else
		printf("%c bad", *av[1]);
	return (0);
}*/
