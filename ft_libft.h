/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_daheader.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:04:23 by dait-atm          #+#    #+#             */
/*   Updated: 2019/11/12 14:29:35 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H

# define FT_LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

size_t				ft_strlen(const char *str);
int					ft_toupper(int c);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *src, const char *ndl, size_t len);
int					ft_strncmp(char *s1, char *s2, unsigned int n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
int					ft_memcmp(const void *s1, const void *s2, unsigned int n);
void				*ft_memchr(const void *s, int c, unsigned int n);
void				*ft_memccpy(void *d, const void *s, int c, unsigned int n);
int					ft_print(int c);
int					ft_isascii(int c);
int					ft_isdigit(char c);
int					ft_isascii(int c);
int					ft_isalpha(char c);
int					ft_isalnum(int c);
void				ft_bzero(void *s, size_t n);
int					ft_atoi(const char *str);
void				*ft_memset(void *b, int c, size_t len);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcat(char *dest, const char *src, size_t size);
size_t				ft_strlcpy(char *dest, const char *src, size_t size);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *s1);
void				*ft_calloc(size_t count, size_t size);
void				*ft_print_memory(void *addr, size_t size);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char    			*ft_strjoin(char const *s1, char const *s2);
char				*ft_itoa(int n);

#endif
