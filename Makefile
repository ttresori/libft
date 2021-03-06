#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttresori <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/23 23:38:06 by ttresori          #+#    #+#              #
#    Updated: 2019/01/24 01:23:07 by ttresori         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

OBJ = $(SRC:.c=.o)

LIB = libft.h

CC = gcc -Wall -Werror -Wextra

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	  ft_isprint.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c \
	  ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_putchar.c \
	  ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
	  ft_putstr.c ft_putstr_fd.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c \
	  ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
	  ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c \
	  ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
	  ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c \
	  ft_lstdel.c ft_lstdelone.c ft_itoa.c ft_lstadd.c ft_lstnew.c ft_lstiter.c \
	  ft_lstmap.c ft_strsplitset.c ft_free_split.c search_env.c \
	  remove_in_tab.c ft_isblanks.c ft_realloc.c ft_strsdup.c add_in_tab.c \
	  ft_print_space.c ft_print_tab.c ft_putendl_b.c ft_strclr.c

.PHONY : all clean fclean re

all : $(NAME)

$(NAME) :
	$(CC) -c $(SRC) -I .
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
