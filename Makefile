# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 13:27:46 by dait-atm          #+#    #+#              #
#    Updated: 2019/11/13 20:15:04 by dait-atm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GRN_COLOR	= \033[32;01m
GRF_COLOR	= \033[32;02m
YEL_COLOR	= \033[33;01m
RED_COLOR	= \x1B[31m
RST_COLOR	= \033[0m

SRCS		= ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnstr.c \
ft_strrchr.c \
ft_tolower.c \
ft_toupper.c \
ft_atoi.c \
ft_calloc.c \
ft_strdup.c \
ft_print_memory.c \
ft_substr.c \
ft_strjoin.c \
ft_strtrim.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strmapi.c \
ft_putendl_fd.c

NAME = libft.a
OBJS = ${SRCS:.c=.o}
FLAGS = -Wall -Wextra -Werror
HDR  = includes

$(NAME): ${OBJS}
	ar -rcs ${NAME} ${OBJS}

%.o: %.c
	gcc ${FLAGS} -c -o $@ $< -I ${HDR}

all: ${NAME}

clean:
	/bin/rm -f ${OBJS}

fclean:
	rm -f ${NAME} ${OBJS}

re: fclean all

.PHONY: fclean all clean re

cat:
	@echo "$(RED_COLOR)                         _"
	@echo "                        | \\"
	@echo "       MIAW             | |"
	@echo "                        | |"
	@echo "   |\                   | |"
	@echo "  /, ~\                / /"
	@echo "x      \`-.....-------./ /"
	@echo "  \-. ~  ~              |"
	@echo "     \             /    |"
	@echo "      \  /_     ___\   /"
	@echo "      | /\ ~~~~~   \ |"
	@echo "      | | \        || |"
	@echo "      | |\ \       || )"
	@echo "     (_/ (_/      ((_/$(RST_COLOR)"
