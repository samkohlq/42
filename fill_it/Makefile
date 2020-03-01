# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skoh <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/21 15:01:32 by skoh              #+#    #+#              #
#    Updated: 2019/11/08 15:24:13 by skoh             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
SRCS = ./fillitproj/*.c
OBJS = ./fillitproj/*.o
HDR = ./fillitproj/fillit.h
FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HDR) -L. libft/libft.a

clean:
	/bin/rm -f $(OBJS)
	make -C $(LIBFT) clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean

re: fclean all
