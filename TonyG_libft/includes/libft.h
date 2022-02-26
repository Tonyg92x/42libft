/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyg <tonyg@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 11:38:26 by aguay             #+#    #+#             */
/*   Updated: 2022/02/26 13:43:41 by tonyg            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>
# include <ctype.h>
# include "libft.h"
# include <stddef.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <fcntl.h>

typedef struct linked_list
{
	struct linked_list	*next;
	struct linked_list	*prev;
	int					position_wanted;
	int					content;
}					t_llist;

typedef struct linked_lists
{
	struct linked_list	*start_a;
	struct linked_list	*start_b;
	int					len_a;
	int					len_b;
	int					count;
	int					option;
}					t_llists;

// Memory-manipulation fonctions
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *destination, const void *source, size_t size);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_bzero(void *s, size_t n);

// Character validation fonctions
int			ft_isalpha(int c);
int			ft_isprint(int c);
int			ft_isalnum(int character);
int			ft_isascii(int c);
int			ft_isdigit(int character);

// Data-conversion fonctions
int			ft_atoi(const char *str);
char		*ft_itoa(int n);
char		*ft_utoa(unsigned int n);
long int	ft_atol(char	*string);

// String-manipulation fonctions
size_t		ft_strlen(const char *str);
int			ft_toupper(int character);
int			ft_tolower(int character);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *src, size_t dstsize);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strdup(const char *src);

// Memory-management fonctions
void		*ft_calloc(size_t count, size_t size);
void		ft_free2d(char **string);

// File-Descriptor fonctions
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_unsigned_fd(unsigned int n, int fd);

// Printf fonctions
int			ft_printf(const char *str, ...);
int			ft_puthex(va_list s, int count, char type, int *ratour);
int			ft_print_dui(va_list s, int count, char type, int *retour);
int			ft_print_chars(va_list s, int count, char type, int *retour);

// Linked-list fonctions (gonna be rework for more flexibility with fonctions)

#endif
