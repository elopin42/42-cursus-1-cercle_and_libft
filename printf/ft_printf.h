/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 22:49:24 by elopin            #+#    #+#             */
/*   Updated: 2024/11/30 21:51:35 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *s, ...);
int	ft_print_char(char c);
int	ft_print_string(char *s);
int	ft_ad(void *adr, char *base, unsigned long nbr);
int	ft_print_int(int c);

#endif