/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:37:34 by jkate             #+#    #+#             */
/*   Updated: 2020/11/14 01:02:25 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int arg);
int		ft_isalpha(int arg);
int		ft_isascii(int arg);
int		ft_isdigit(int arg);
int		ft_isprint(int arg);
void	*ft_memccpy(void *dest, const void *source, int ch, size_t count);
void	*ft_memchr(const void *arr, int c, size_t n);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
void	*ft_memcpy(void *dest, const void *source, size_t count);
void	*ft_memmove(void *dest, const void *source, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *source, size_t size);
size_t	ft_strlcat(char *dest, const char *source, size_t size);
int		ft_strncmp(const char *str1, const char *str2, size_t num);
char	*ft_strnstr(const char *source, const char *find, size_t n);
char	*ft_strrchr(const char *str, int ch);
int		ft_toupper(int str);
int		ft_tolower(int str);

void	*ft_calloc(size_t num, size_t size);
int		ft_realloc(char **line, long int current_size, long int needed_size);

char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

void	free_arr(char ***arr);
void	ft_memdel(void **ap);
char	**ft_strsplit(char const *s, char c);
char	*ft_strsub(char const *s, unsigned int start, size_t len);

#endif
