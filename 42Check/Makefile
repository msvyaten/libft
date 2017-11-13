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
CFILES = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_memccpy.c ft_memchr.c \
ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c ft_strchr.c \
ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c \
ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_strrchr.c ft_strstr.c ft_strnew.c \
ft_strdel.c ft_memalloc.c ft_memdel.c ft_strclr.c ft_striter.c ft_striteri.c \
ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
ft_strtrim.c ft_strsplit.c ft_itoa.c ft_putchar.c ft_putendl.c ft_putstr.c \
ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_intlen.c ft_countwords.c ft_countchars.c
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
