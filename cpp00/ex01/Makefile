# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orazafy <orazafy@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 00:57:55 by orazafy           #+#    #+#              #
#    Updated: 2023/10/02 00:57:57 by orazafy          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Werror -Wextra -g -std=c++98
IFLAGS = -I$(INCDIR)

SRCDIR = srcs
OBJDIR = objs
BINDIR = bin
INCDIR = include

SRCS_FILES = Contact.cpp \
			main.cpp \
			PhoneBook.cpp
			

SRCS = $(addprefix $(SRCDIR)/, $(SRCS_FILES))
OBJS = $(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)


INCS_FILES = Contact.hpp \
				PhoneBook.hpp

INCS = $(addprefix $(INCDIR)/, $(INCS_FILES))

NAME = $(BINDIR)/phonebook

RMR = rm -rf
MKDIR_P = mkdir -p

all: $(NAME)

$(NAME): $(OBJS) $(MLX) | $(BINDIR)
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