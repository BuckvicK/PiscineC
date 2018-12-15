# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: krakharo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/30 12:37:00 by krakharo          #+#    #+#              #
#    Updated: 2018/10/30 12:37:01 by krakharo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRCS = main.c ft_putchar.c ft_putstr.c ft_display_file.c
FLAGS = -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME): $(SRCS:.c=.o)
	gcc $(SRCS) -o $(NAME)

vpath %.c .

%.o: %.c
	gcc $(FLAGS) $<

vpath %.c .

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all