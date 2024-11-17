/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 19:30:12 by elopin            #+#    #+#             */
/*   Updated: 2024/11/15 18:44:00 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <libft.h>
//#include <bsd/string.h>

char	*ft_strnstr(const char	*b, const char	*li, size_t	l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!*li)
		return ((char *)b);
	while (b[i])
	{
		j = 0;
		while (li[j] == b[i] && b[i] && i < l)
		{
			i++;
			j++;
		}
		if (!li[j])
			return ((char *)&b[i - j]);
	i -= j;
	i++;
	}
	return (NULL);
}

/*int	main()
{
	char	str[] = "test de fou";
	char	strch[] = "de";

	printf("%s, %s, %s\n", str, strch, ft_strnstr(str, strch, 7));
	printf("%s, %s, %s\n", str, strch, strnstr(str, strch, 7));
	return (0);
}*/