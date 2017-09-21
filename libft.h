/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:03:56 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/20 11:35:12 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

void	*ft_memset(void *ptr, int val, size_t n);
void	ft_bzero(void *ptr, size_t b);
void	*ft_memcpy(void *dst, const void *src, size_t b);
void	*ft_memccpy(void *dst, const void *src, int c, size_t b);
void	*ft_memmove(void *dst, const void *src, size_t b);
void	*ft_memchr(const void *s, int c, size_t b);
int		ft_memcmp(const void *m1, const void *m2, size_t b);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t size);
char	*ft_strcat(char *dst, const char *src);
char	*ft_strncat(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *str, int val);
char	*ft_strrchr(const char *str, int val);
char	*ft_strstr(const char *str, const char *needle);
char	*ft_strnstr(const char *str, const char *needle, size_t size);
int		ft_strcmp(const char *a, const char *b);
int		ft_strncmp(const char *a, const char *b, size_t size);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ptr);
char	*ft_strnew(size_t size);
void	ft_strdel(char **str);
void	ft_strclr(char *str);
void	ft_striter(char *str, void (*f)(char *));
void	ft_striteri(char *str, void (*f)(unsigned int, char *));
char	*ft_strmap(char const *str, char (*f)(char));
char	*ft_strmapi(char const *str, char (*f)(unsigned int, char));
int		ft_strequ(char const *a, char const *b);
int		ft_strnequ(char const *a, char const *b, size_t n);
char	*ft_strsub(char const *str, unsigned int start, size_t len);
char	*ft_strjoin(char const *a, char const *b);
char	*ft_strtrim(char const *str);
char	**ft_strsplit(char const *str, char c);
char	*ft_itoa(int n);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
