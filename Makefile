# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kneves <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 14:49:21 by kneves            #+#    #+#              #
#    Updated: 2023/11/07 15:44:06 by kneves           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
FILES = ft_atoi.c \
	ft_bzero.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_strdup.c \
	ft_calloc.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_substr.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c 

OBJ = $(FILES:.c=.o)
RM = rm -f

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
