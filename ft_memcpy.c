/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:51:57 by elopin            #+#    #+#             */
/*   Updated: 2024/11/12 17:32:50 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dest, const	void	*src, size_t n)
{
	unsigned long	i;
	unsigned char	*des;
	unsigned char	*srs;

	des = (unsigned char *)dest;
	srs = (unsigned char *)src;
	i = 0;
	while (srs[i] || i < n)
	{
		des[i] = srs[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    const char src[50] = "brefagagagaga]";
    char dest[50];
    strcpy(dest, "Hesloooo!!");
    printf("%s\n", dest);
    ft_memcpy(dest, src, strlen(src + 1));
    printf("%s\n", dest);
    return (0);
}*/
