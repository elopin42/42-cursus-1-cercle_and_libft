/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:00 by elopin            #+#    #+#             */
/*   Updated: 2024/12/11 19:20:41 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_read(int fd, char **BUFFER);
void	ft_write(char **str, char *BUFFER, size_t bytes);

char	*get_next_line(int fd)
{
	static char	*buffer;
	size_t		bytes;
	char		*str;

	if (!buffer)
		bytes = ft_read(fd, &buffer);
	ft_write(&str, buffer, bytes);
	return (str);
}

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}
