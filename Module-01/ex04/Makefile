# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 00:37:06 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/06 00:45:00 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= replace

SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic #-std=c++98

PRINTF		= printf

PURPLE		:= \033[0;34m
PINK		:= \033[0;35m
RESET		:= \033[0m

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex04 $(PINK)successfully compiled! $(RESET)\n"

clean:
			$(RM) $(OBJ)
			
fclean:		clean
			$(RM) $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex04 $(PINK)successfully cleaned! $(RESET)\n"
			
re:			fclean $(NAME)

.PHONY:		all clean fclean re