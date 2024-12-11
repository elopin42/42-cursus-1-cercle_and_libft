/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:22 by elopin            #+#    #+#             */
/*   Updated: 2024/12/11 19:24:01 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	ft_read(int fd, char **BUFFER)
{
	size_t	bytes;

	*BUFFER = malloc(BUFFER_SIZE);
	bytes = read(fd, *BUFFER, BUFFER_SIZE);
	return (bytes);
}

void	ft_write(char **str, char *BUFFER, size_t bytes)
{
	int		i;
	char	*tmp;
	char	*tmp2;

	i = 0;
	while (BUFFER[i - 1] != '\n' && BUFFER[i] != '\0')
		i++;
	tmp[i] = '\0';
	while (--i > 0)
		tmp[i] = BUFFER[i];
	i++;
	*str = malloc(sizeof(char *) + i);
	while (tmp[i])
		*str[i] = tmp[i];
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned long	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen((char *)s1)])
	{
		str[i] = s2[i - ft_strlen((char *)s1)];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*utiliser strjoin voire le problemme que on voulais faire plus tard,
	faire une chaine avec tout
le fichier text grace a strjoin et ensuite le decouper (utiliser un tmp) et ensuite tout malloc et free*/