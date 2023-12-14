# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 18:05:30 by orazafy           #+#    #+#              #
#    Updated: 2023/10/19 23:14:24 by orazafy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
IFLAGS = -I$(INCDIR)

SRCDIR = .
OBJDIR = objs
BINDIR = bin
INCDIR = .

SRCS = checkStream.cpp \
	closeFiles.cpp \
	main.cpp \
	openFiles.cpp \
	replace.cpp

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

INCS = replace.hpp

NAME = $(BINDIR)/replace

RMR = rm -rf
MKDIR_P = mkdir -p

all: $(NAME)

$(NAME): $(OBJS) | $(BINDIR)
	$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) -o $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(INCS) | $(OBJDIR)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(BINDIR):
	$(MKDIR_P) $(BINDIR)

$(OBJDIR):
	$(MKDIR_P) $(OBJDIR)

clean:
		$(RMR) $(OBJDIR)

fclean: clean
		$(RMR) $(BINDIR)

re: fclean all

.PHONY: all clean fclean re