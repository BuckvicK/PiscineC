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

NAME = libft.a
SRCS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Werror -Wextra -c -I includes
HEAD = $(wildcart includes/*.h)

all: $(NAME)

$(NAME): $(SRCS)
	ar rc $(NAME) $(SRCS:.c=.o)
	ranlib $(NAME)

%.o: %.c $(HEAD)
	gcc $(FLAGS) $<

vpath %.c srcs

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all

include $(HEAD)