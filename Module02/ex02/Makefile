# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/04 13:13:46 by flee              #+#    #+#              #
#    Updated: 2022/04/04 13:13:48 by flee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= Fixed

SRCS=  main.cpp Fixed.cpp

OBJS= $(SRCS:.cpp=.o)

CC= c++

CFLAGS= -Wall -Werror -Wextra -std=c++98

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
