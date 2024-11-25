/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 16:51:57 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 17:52:55 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const	void	*src, size_t n)
{
	unsigned int		i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
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
