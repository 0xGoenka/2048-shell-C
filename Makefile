#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptao <ptao@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/30 12:40:14 by ptao              #+#    #+#              #
#    Updated: 2016/01/31 19:51:01 by eleclet          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = game_2048

SRC_PATH = ./

OBJ_PATH =

INC_PATH = -I.

LIB_PATH = -L.

LIB_NAME = -lncurses

CFLAGS = -Wall -Wextra -Werror

CC = clang

SRC_NAME = main.c       	    	    \
           message.c                    \
           grid.c                       \
           tool.c                       \
           movement_down.c              \
           movement_up.c                \
           movement_left.c              \
           movement_right.c             \
           random.c                     \
           check.c                      \
           draw_tab.c                   \
		   print512.c					\
		   printn.c						\
		   sys.c						\

OBJ_NAME = $(SRC:.c=.o)

SRC = $(addprefix $(SRC_PATH),$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ_NAME))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(LIB_PATH) $(LIB_NAME) ./libft/libft.a  $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(INC_PATH) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
