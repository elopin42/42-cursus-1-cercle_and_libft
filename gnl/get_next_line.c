/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:00 by elopin            #+#    #+#             */
/*   Updated: 2024/12/14 21:45:13 by elopin           ###   ########.fr       */
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
int		ft_write(char **str, char *BUFFER);

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*str;
	char		*tmp;
	int			i;

	i = 0;
	if (!buffer)
	{
		i = ft_read(fd, &buffer);
		while (buffer[i - 1] != '\0')
		{
			i = ft_read(fd, &tmp);
			buffer = ft_strjoin(buffer, tmp);
		}
	}
	i = ft_write(&str, buffer);
	buffer = &buffer[i];
	return (str);
}

/*int	main(void)
{
	int	fd;

	fd = open("test.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	close(fd);
	return (0);
}*/
