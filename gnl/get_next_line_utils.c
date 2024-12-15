/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:22 by elopin            #+#    #+#             */
/*   Updated: 2024/12/15 19:01:20 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_read(int fd, char **BUFFER)
{
	size_t	bytes;

	*BUFFER = malloc(BUFFER_SIZE);
	if (!(*BUFFER))
		return (-1);
	bytes = read(fd, *BUFFER, BUFFER_SIZE);
	return (bytes);
}

int	ft_write(char **str, char *BUFFER)
{
	int	i;
	int	j;

	i = 0;
	while (BUFFER[i] != '\n' && BUFFER[i] != '\0')
		i++;
	if (BUFFER[i] == '\n')
		i++;
	if (i == 0)
		return (-1);
	j = i;
	*str = malloc(sizeof(char *) * i);
	if (!(*str))
		return (-1);
	(*str)[i] = '\0';
	while (--i >= 0)
		(*str)[i] = BUFFER[i];
	return (j);
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
