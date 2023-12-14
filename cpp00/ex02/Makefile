# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 00:58:18 by orazafy           #+#    #+#              #
#    Updated: 2023/10/02 01:57:13 by orazafy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
IFLAGS = -I.

SRCS = Account.cpp \
		tests.cpp
			
OBJS = $(SRCS:.cpp=.o)

INCS = Account.hpp

NAME = account

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) -o $(NAME) 

%.o: %.cpp $(INCS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
		rm -f $(OBJS)

fclean: clean
		rm  -f $(NAME)

re: fclean all

.PHONY: all clean fclean re