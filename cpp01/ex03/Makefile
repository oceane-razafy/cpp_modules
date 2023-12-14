# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 20:52:16 by orazafy           #+#    #+#              #
#    Updated: 2023/10/16 22:39:57 by orazafy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
IFLAGS = -I$(INCDIR)

SRCDIR = .
OBJDIR = objs
BINDIR = bin
INCDIR = .

SRCS = HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp \
	main.cpp

OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

INCS = HumanA.hpp \
	HumanB.hpp \
	Weapon.hpp

NAME = $(BINDIR)/humansAttack

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