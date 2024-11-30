/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:22:24 by elopin            #+#    #+#             */
/*   Updated: 2024/11/30 22:16:43 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

static int	ft_ads(unsigned long adr, char *base, unsigned long nbr)
{
	int	count;

	count = 0;
	if (adr >= nbr)
		count += ft_ads(adr / nbr, base, nbr);
	count += ft_print_char(base[adr % nbr]);
	return (count);
}

int	ft_ad(void *adr, char *base, unsigned long nbr)
{
	int					count;
	unsigned long		adress;

	count = 0;
	adress = (unsigned long)adr;
	if (adress)
		count += ft_print_string("0x");
	if (adress == 0)
		count = ft_print_string("(nil)");
	else
		count += ft_ads(adress, base, nbr);
	return (count);
}
