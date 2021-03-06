# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dait-atm <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/06 13:27:46 by dait-atm          #+#    #+#              #
#    Updated: 2021/02/16 08:34:04 by dait-atm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
OBJS		= ${SRCS:.c=.o} ${LISTS:.c=.o} 
FLAGS		= -Wall -Wextra -Werror
INC			= includes
CC			= gcc

CYN_COLOR	= \033[36m
GRN_COLOR	= \033[32;01m
GRF_COLOR	= \033[32;02m
YEL_COLOR	= \033[33;01m
RED_COLOR	= \x1B[31m
RST_COLOR	= \033[0m

SRCS		= \
ft_bzero.c \
ft_bubble_sort.c \
ft_cmp.c \
ft_swap.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isaldigit.c \
ft_isprint.c \
ft_isspace.c \
ft_isalspace.c \
ft_isupper.c \
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
ft_strlen_array.c \
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
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_abs.c \
ft_fabs.c \
ft_isneg.c \
c2i.c \
i2c.c \
ft_nb_digit.c \
get_next_line.c \
ft_strdel_array.c \
ft_print.c \
ft_strcut.c \
ft_realloc.c \
ft_realloc_str_array.c \
ft_strcpy.c \
ft_strarray_to_str.c \
ft_strstraff_left_array.c \
ft_strtoll.c

LISTS		= \
ft_lstnew_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstadd_right.c \
ft_lstclear_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstlast_bonus.c \
ft_lstmap_bonus.c \
ft_lstsize_bonus.c \
ft_lstgetnb.c \
ft_lstcount.c \
ft_lstget_previous.c

ifeq ($(OS),Windows_NT)
	POSIX = 0
else
	POSIX = 1
endif

all : $(NAME)

$(NAME) : $(OBJS)
	@echo "\rCreating $(NAME)\c"
	@ar -rcs $(NAME) $(OBJS) $(BBJS)
	@echo "\t\t$(CYN_COLOR)[OK]$(RST_COLOR)"

$(REDUCE) : all
	@if [ ! -z $(shell which strip) ]; then \
		strip $(NAME);\
	fi;
	@echo "\t\t$(CYN_COLOR)[OK]$(RST_COLOR)"

%.o : %.c
	@echo "\r$@\c"
	@$(CC) $(FLAGS) -c -o $@ $< -DPOSIX=$(POSIX) -I $(INC)
	@echo "\t\t$(CYN_COLOR)[OK]$(RST_COLOR)\c"
	@echo "\r                                              \c"

clean :
	@echo "Deleting object files\c"
	@/bin/rm -f $(OBJS) $(BBJS)
	@echo "\t\t$(CYN_COLOR)[OK]$(RST_COLOR)"

fclean : clean
	@echo "Deleting $(NAME)\c"
	@/bin/rm -f $(NAME)
	@echo "\t\t$(CYN_COLOR)[OK]$(RST_COLOR)"

re : fclean all

.PHONY: fclean all clean re cat

cat :
	@echo "$(RED_COLOR)"
	@echo "                   _____"
	@echo "                  /  __ \\"
	@echo "       MIAW       \\/   \\ \\"
	@echo "                        | \\"
	@echo "  ./\\                   | |"
	@echo " /, ~\\                 / /"
	@echo "{     \`-......-------./ /"
	@echo "  \-. ~  ~              |"
	@echo "     \             /    |"
	@echo "      \  /_________\\   /"
	@echo "      | /\\         /\\/|"
	@echo "      | | \\       / / |"
	@echo "      | |\\ \\     / /| )"
	@echo "     (_/ (_/    (_/(_/"
	@echo "$(RST_COLOR)"
