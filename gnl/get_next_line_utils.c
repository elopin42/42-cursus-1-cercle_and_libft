/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:22 by elopin            #+#    #+#             */
/*   Updated: 2024/12/16 22:23:30 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_read(int fd, char **BUFFER)
{
	ssize_t	bytes;

	bytes = 0;
	*BUFFER = malloc(BUFFER_SIZE + 1);
	if (!(*BUFFER))
		return (-1);
	bytes = read(fd, *BUFFER, BUFFER_SIZE);
	if (bytes >= 0)
		(*BUFFER)[bytes] = '\0';
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
	j = i;
	if (i == 0)
		return (-1);
	*str = malloc(sizeof(char) * (i + 1));
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

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char			*str;
	unsigned long	i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - ft_strlen(s1)])
	{
		str[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	str[i] = '\0';
	free(s1);
	return (str);
}
