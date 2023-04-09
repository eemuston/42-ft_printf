# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eemuston <eemuston@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 12:44:57 by eemuston          #+#    #+#              #
#    Updated: 2022/12/12 19:30:42 by eemuston         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Werror -Wextra

HEADER = -I ft_printf.h

SRCS = ft_printf.c ft_printf_utils.c ft_printf_cs.c ft_printf_p.c \
ft_printf_lhex.c ft_printf_chex.c ft_printf_n.c

OBJ = ft_printf.o ft_printf_utils.o ft_printf_cs.o ft_printf_p.o \
ft_printf_lhex.o ft_printf_chex.o ft_printf_n.o

all: $(NAME)

$(NAME):
		$(MAKE) -C ./libft
		cp libft/libft.a libftprintf.a
		cc -c $(FLAGS) $(HEADER) $(SRCS)
		ar rc $(NAME) $(OBJ)
clean:
		$(MAKE) clean -C ./libft
		rm -f $(OBJ)
fclean: clean
		$(MAKE) fclean -C ./libft
		rm -f $(NAME) clean
re: fclean all