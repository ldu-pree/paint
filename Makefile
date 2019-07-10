# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldu-pree <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/09 15:41:21 by ldu-pree          #+#    #+#              #
#    Updated: 2019/07/10 16:27:59 by ldu-pree         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = paint.a
SRC = main.c \
	  grid.c \
	  square.c \
	  right.c \
	  up.c \
	  down.c \
	  place.c

OBJ = $(SRC:%.c=%.o)

all:
	gcc -c $(SRC)
	gcc -g $(SRC) mlx/libmlx.a -lmlx -framework OpenGL -framework AppKit -o paint
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
