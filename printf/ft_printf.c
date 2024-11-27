/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:50:37 by elopin            #+#    #+#             */
/*   Updated: 2024/11/27 01:02:27 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>

void		ft_print_char(char c);
void		ft_print_int(int c);
void		ft_print_string(char *s);

static void	ft_sub_printf(char c, va_list(args))
{
	if (c == 'c')
		ft_print_char((char)va_arg(args, int));
	else if (c == 'd' || c == 'i')
		ft_print_int(va_arg(args, int));
	else if (c == '%')
		ft_print_char(c);
	else if (c == 's')
		ft_print_string(va_arg(args, char *));
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			ft_sub_printf(s[++i], args);
		else
			ft_print_char(s[i]);
		i++;
	}
	va_end(args);
	return (i);
}

int	main(void)
{
	ft_printf("test,%s , %d, %i, %% ", "test de fou", 0, -415);
	return (0);
}