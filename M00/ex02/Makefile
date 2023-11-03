# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 01:36:56 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/04 02:59:13 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= accounts

SRC			= Accounts.cpp tests.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
RM			= rm -rf
CFLAGS		= -Wall -Wextra -Werror -pedantic #-std=c++98

PRINTF		= printf

PURPLE		:= \033[0;34m
PINK		:= \033[0;35m
RESET		:= \033[0m

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)✧ $(PURPLE)ex02 $(PINK)successfully compiled! ✧$(RESET)\n"
			
			
clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re