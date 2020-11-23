/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:04:23 by dait-atm          #+#    #+#             */
/*   Updated: 2020/11/23 20:13:37 by dait-atm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdint.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

# ifndef BLK
#  define BLK   "\x1B[30m"
# endif
# ifndef RED
#  define RED   "\x1B[31m"
# endif
# ifndef GRN
#  define GRN   "\x1B[32m"
# endif
# ifndef YEL
#  define YEL   "\x1B[33m"
# endif
# ifndef BLU
#  define BLU   "\x1B[34m"
# endif
# ifndef MAG
#  define MAG   "\x1B[35m"
# endif
# ifndef CYN
#  define CYN   "\x1B[36m"
# endif
# ifndef WHT
#  define WHT   "\x1B[37m"
# endif
# ifndef RST
#  define RST   "\x1B[0m"
# endif

size_t			ft_strlen(const char *str);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *src, const char *ndl, size_t len);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
int				ft_memcmp(const void *s1, const void *s2, unsigned int n);
void			*ft_memchr(const void *s, int c, unsigned int n);
void			*ft_memccpy(void *d, const void *s, int c, unsigned int n);
int				ft_isprint(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isascii(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isspace(int c);
void			ft_bzero(void *s, size_t n);
int				ft_atoi(const char *str);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strchr(const char *s, int c);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strncpy2(char *dst, const char *src, size_t len);
char			*ft_strdup(const char *s1);
void			*ft_calloc(size_t count, size_t size);
void			*ft_print_memory(void *addr, size_t size);
char			*ft_strtrim(char const *s1, char const *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_itoa(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
int				ft_isneg(long long i);
int				ft_abs(long long i);
float			ft_fabs(float f);
int				c2i(char c);
char			i2c(int i);
int				ft_nb_digit(int n);
void			ft_swap_float(float *a, float *b);

int				get_next_line(int fd, char **line);

void			ft_print(char *s);
void			ft_print_cb(void *s);
void			ft_printr(char *s);
void			ft_help(void);

void			ft_strdel_array(char ***s);
char			*ft_strcut(char *s, int beg, int end);

t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alst, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*d)(void *));
int				ft_lstcount(t_list *l);
char			*ft_strncpy(char *dst, const char *src, size_t len);

t_list			*ft_lstgetnb(t_list *alst, int nb);

#endif
