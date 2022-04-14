# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 15:01:30 by flee              #+#    #+#              #
#    Updated: 2022/04/12 15:01:32 by flee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Zoo

SRCS=  main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS= $(SRCS:.cpp=.o)

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98 -g3

.cpp.o:

	$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re