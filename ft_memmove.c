/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:13:14 by elopin            #+#    #+#             */
/*   Updated: 2024/11/20 17:19:18 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
//#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned int		i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	if (d > s)
	{
		while (count--)
			d[count] = s[count];
	}
	else
	{
		while (i < count)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*#define SIZE    21
 
char target[SIZE] = "a shiny white sphere";
 
int main( void )
{
  char * p = target + 0;   p points at the starting character
                          of the word we want to replace 
  char * source = target + 42;  start of "shiny" 
 
  printf( "Before memmove, target is \"%s\"\n", target );
  ft_memmove( p, source, 11 );
  printf( "After memmove, target becomes \"%s\"\n", target );
}*/
