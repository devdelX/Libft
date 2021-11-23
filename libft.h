/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:01:37 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/23 16:14:31 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <string.h>

int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalnum(int i);
int		ft_isdigit(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src,size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memset(void *b, int c, size_t len);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *b, int c, size_t len);

#endif