/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:29:52 by elopin            #+#    #+#             */
/*   Updated: 2024/11/17 22:17:03 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int		ft_atoi( const char *ts );
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t ec, size_t es);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr( const void	*m, int s, size_t size );
int		ft_memcmp( const void	*p1, const void	*p2, size_t s );
void	*ft_memcpy(void *dest, const void	*src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t count);
void	*ft_memset(void *dest, int c, size_t count);
char	*ft_strchr(const char *s, int sb);
char	*ft_strdup(const char *src);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *d, const char *s, size_t n);
int		ft_strlen(char *str);
int		ft_strncmp( const char *f, const char *s, size_t l );
char	*ft_strnstr(const char	*b, const char	*li, size_t	l);
char	*ft_strrchr(const char	*s, int l );
int		ft_tolower(int chara);
int		ft_toupper(int chara);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif