/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:05:19 by elopin            #+#    #+#             */
/*   Updated: 2024/11/15 18:45:22 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <libft.h>

int	ft_toupper(int chara)
{
	if (chara >= 97 && chara <= 122)
		chara -= 32;
	return (chara);
}
/*int main()
{
 const char *input = "Diego De La Vega";
    char output[100]; // tableau pour stocker le résultat
    int i = 0;

    while (input[i] != '\0') {
        output[i] = ft_toupper((unsigned char)input[i]);
        i++;
    }
    output[i] = '\0'; // ajout du caractère de fin de chaîne

    printf("Résultat : %s\n", output);
    return 0;
}*/
