# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 10:20:21 by eemuston          #+#    #+#              #
#    Updated: 2022/11/16 13:58:34 by eemuston         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Werror -Wextra -I libft.h

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c ft_tolower.c ft_toupper.c \
ft_strrchr.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_strlcpy.c ft_strdup.c ft_calloc.c ft_strlcat.c ft_putendl_fd.c \
ft_striteri.c ft_strmapi.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c

OBJ = ft_atoi.o ft_bzero.o ft_isalnum.o ft_isalpha.o ft_isascii.o ft_isdigit.o \
ft_isprint.o ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o \
ft_putnbr_fd.o ft_putstr_fd.o ft_strlen.o ft_tolower.o ft_toupper.o \
ft_strrchr.o ft_strchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o \
ft_strlcpy.o ft_strdup.o ft_calloc.o ft_strlcat.o ft_putendl_fd.o \
ft_striteri.o ft_strmapi.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o \
ft_itoa.o

all: $(NAME)

$(NAME):
	cc -c $(FLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all