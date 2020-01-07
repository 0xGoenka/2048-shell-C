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

LIB_NAME = -lncurses -lcurses

CFLAGS = -g

CC = gcc

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
	$(CC)  $^ -o $@ $(LIB_NAME) ./libft/libft.a

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) $(INC_PATH) -c $(LIB_NAME) $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	cd libft/
	rm -f *.o

re: fclean all
