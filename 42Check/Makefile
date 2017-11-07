# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msvyaten <msvyaten@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/28 20:30:59 by msvyaten          #+#    #+#              #
#    Updated: 2017/10/28 20:46:08 by msvyaten         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror
CFILES = *.c
OFILES = *.o
//HFILES = *.h

all: $(NAME)
$(NAME): compile
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)
compile:
	gcc -c $(FLAGS) $(CFILES)
clean:
	rm -rf $(OFILES)
fclean: clean
	rm -rf $(NAME)
re: fclean all
