/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:50:37 by elopin            #+#    #+#             */
/*   Updated: 2024/11/30 22:15:20 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

// cc -Wall -Werror -Wextra *.c

int			ft_ad(void *adr, char *base, unsigned long nbr);
int			ft_print_char(char c);
int			ft_print_int(int c);
int			ft_print_string(char *s);

static int	ft_sub_printf(char c, va_list(args), int t)
{
	if (c == 'c')
		t = ft_print_char(((char)va_arg(args, int)));
	else if (c == 'd' || c == 'i')
		t = ft_print_int(va_arg(args, int));
	else if (c == '%')
		t = ft_print_char('%');
	else if (c == 's')
		t = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		t += ft_ad(va_arg(args, void *), "0123456789abcdef", 16);
	// else if (c == 'x')
	//	t = ft_ad(va_arg(args, unsigned long), "0123456789abcdef", 16);
	// else if (c == 'X')
	//	t = ft_ad(va_arg(args, unsigned long), "0123456789ABCDEF", 16);
	// else if (c == 'u')
	//	t = ft_ad(va_arg(args, unsigned long), "0123456789", 10);
	return (t);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	va_list	args;
	int		count;

	i = -1;
	count = 0;
	va_start(args, s);
	while (s[++i])
	{
		if (s[i] == '%')
			count += ft_sub_printf(s[++i], args, 0);
		else
		{
			ft_print_char(s[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

/*int	main(void)
{
	int	k;
	int	h;

	k = 0;
	h = 0;
	k = printf("test,%p\n", (void *)0);
	h = ft_printf("test,%p\n", (void *)0);
	printf("%i, %i", k, h);
	return (0);
}*/
