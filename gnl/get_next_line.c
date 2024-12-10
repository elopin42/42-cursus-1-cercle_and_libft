/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:00 by elopin            #+#    #+#             */
/*   Updated: 2024/12/10 15:39:59 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	buf_to_str(char *BUFFER, size_t B_SIZE, char **str);
size_t	new_buffer(int fd, char **BUFFER, size_t B_SIZE);

char	*get_next_line(int fd)
{
	static char	*BUFFER;
	char		*str;
	size_t		size;
	int			i;

	if (!BUFFER)
		size = new_buffer(fd, &BUFFER, BUFFER_SIZE);
	i = buf_to_str(BUFFER, BUFFER_SIZE, &str);
	BUFFER = &BUFFER[i];
	return (str);
}

int	main(void)
{
	int fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}