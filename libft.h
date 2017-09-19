/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:03:56 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/19 12:58:26 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *ptr, int val, size_t n);
void	ft_bzero(void *ptr, size_t b);
void	*ft_memcpy(void *dst, const void *src, size_t b);
void	*ft_memccpy(void *dst, const void *src, size_t b);
void	*ft_memmove(void *dst, const void *src, size_t b);
void	*ft_memchr(const void *s, int c, size_t b);
int		memcmp(const void *m1, const void *m2, size_t b);
size_t	strlen(const char *str);
char	*strdup(const char *str);
char	*strncat(char *dst, const char *src, size_t size);
size_t	strlcat(char *dst, const char *src, size_t size);
char	*strchr(const char *src, int val);
char	*strrchr(const char *src, int val);
char	*strstr(const char *src, const char *needle);
char	*strnstr(const char *src, const char *needle, size_t size);
int		strcmp(const char *s1, const char *s2);
int		strncmp(const char *s1, const char *s2, size_t size);
int		atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

#endif
