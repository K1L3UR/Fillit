# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ardurand <ardurand@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/01 15:42:17 by ardurand          #+#    #+#              #
#    Updated: 2017/04/04 14:35:05 by abrichar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CPPFLAGS = -Iincludes/
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -Llibft
LDLIBS = -lft

LIBFT = -C libft/
SRC_NAME = main.c \
	add_tab_struct.c \
	verif_fd.c \
	resol.c \
	add_tetri.c \
	play_with_map.c \
	int_to_zero.c
OBJ_NAME = $(SRC_NAME:.c=.o)
SRC_PATH = src
OBJ_PATH = obj
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft/
	gcc $(CFLAGS) $(CPPFLAGS) $(LDFLAGS) $(LDLIBS) $(OBJ) -o $(NAME)

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	gcc $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	make clean $(LIBFT)
	rm -rf $(OBJ)

fclean:
	make fclean $(LIBFT)
	rm -rf $(OBJ_PATH)
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
