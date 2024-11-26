/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:12:37 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 17:37:15 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_tolower(int chara)
{
	if (chara >= 65 && chara <= 90)
		chara += 32;
	return (chara);
}

/*int main()
{
	char *input = "TEST de FOU";
	char outpu[100];
	int i;

	i = 0;
	while(input[i])
	{
		outpu[i] = ft_tolower(input[i]);
		i++;
	}
	outpu[i] = '\0';
	printf("%s\n", outpu);
	return (0);
}*/