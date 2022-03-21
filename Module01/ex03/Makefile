# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flee <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 13:07:18 by flee              #+#    #+#              #
#    Updated: 2022/03/21 13:07:20 by flee             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= fightClub 

SRCS=  main.cpp

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