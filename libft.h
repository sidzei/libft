/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 15:32:53 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 19:09:45 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_atoi(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t num, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *ptr, int val, size_t n);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(char *src);
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
char			*ft_strjoin(int size, char **strs, char *sep);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strlen(char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_tolower(int c);
int				ft_toupper(int c);

#endif