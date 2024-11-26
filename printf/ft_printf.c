/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:50:37 by elopin            #+#    #+#             */
/*   Updated: 2024/11/26 20:25:43 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>

void	ft_print_char(char c);
void	ft_print_int(int c);

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			if (s[i] == 'c')
				ft_print_char((char)va_arg(args, int));
			else if (s[i] == 'd' || s[i] == 'i')
				ft_print_int((int)va_arg(args, int));
		}
		else
			ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("test%c%d%i", 's', 1, 0);
	return (0);
}