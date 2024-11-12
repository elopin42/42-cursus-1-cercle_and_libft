/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:06:52 by elopin            #+#    #+#             */
/*   Updated: 2024/11/11 22:13:25 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/*int	main(int ac, char **av)
{
	(void) ac;

	if (ft_isalnum(*av[1]))
		printf("%c good", *av[1]);
	else
		printf("%c bad", *av[1]);
	return (0);
}*/
