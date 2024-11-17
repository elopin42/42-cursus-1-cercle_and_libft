/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 22:11:11 by elopin            #+#    #+#             */
/*   Updated: 2024/11/15 18:38:41 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
//#include <stdio.h>

void	*ft_memchr( const void	*m, int s, size_t size )
{
	size_t					i;
	const unsigned char		*mm;
	unsigned char			c;

	i = 0;
	mm = m;
	c = (unsigned char)s;
	while (i < size)
	{
		if (mm[i] == c)
			return ((void *)&mm[i]);
		i++;
	}
	return (NULL);
}

/*int	main()
{
	char	data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	const size_t	size = sizeof(data);


    void *result = ft_memchr(data, 10, size);
    if (result) {
        printf("Trouvé : %d\n", *(unsigned char *)result);
    } else {
        printf("Non trouvé\n");
    }

    return 0;
}*/