/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 19:48:00 by elopin            #+#    #+#             */
/*   Updated: 2024/12/15 19:10:43 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*str;
	char		*tmp;
	int			i;

	i = 0;
	if (fd < 0)
		return (NULL);
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
	if (i == -1)
		return (NULL);
	buffer = &buffer[i];
	return (str);
}

/*int	main(void)
{
	int		fd;
	char	*str;

	str = NULL;
	fd = open("test.txt", O_RDONLY);
	str = get_next_line(fd);
	if (str != NULL)
	{
		printf("%s", str);
		free(str);
	}
	while (str != NULL)
	{
		str = get_next_line(fd);
		if (str != NULL)
		{
			printf("%s", str);
			free(str);
		}
	}
	close(fd);
	return (0);
}*/
