/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:22 by elopin            #+#    #+#             */
/*   Updated: 2024/12/10 16:03:21 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

size_t	new_buffer(int fd, char **BUFFER, size_t B_SIZE)
{
	size_t	bytes;

	*BUFFER = malloc(BUFFER_SIZE + 1);
	bytes = read(fd, *BUFFER, B_SIZE);
	(*BUFFER)[bytes] = '\0';
	return (bytes);
}

size_t	buf_to_str(char *BUFFER, size_t B_SIZE, char **str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (BUFFER[i - 1] != '\n' && i < B_SIZE && BUFFER[i + 1])
		i++;
	j = i;
	*str = malloc(sizeof(char *) * i + 1);
	*str[i + 1] = '\0';
	while (--i >= 0)
		(*str)[i] = BUFFER[i];
	return (j);
}