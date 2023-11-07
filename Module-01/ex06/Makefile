# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 14:55:49 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/07 15:32:35 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harlFilter

UNAME		:= $(shell uname)

SRC			= main.cpp Harl.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic #-std=c++98

ifeq ($(UNAME), Linux)
CPPFLAGS = -Wall -Wextra -pedantic #-std=c++98 
$(warning "Linux detected! Disabling -Werror")
endif

PRINTF		= printf

PURPLE		:= \033[0;34m
PINK		:= \033[0;35m
RESET		:= \033[0m

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex06 $(PINK)successfully compiled! $(RESET)\n"

clean:
			$(RM) $(OBJ)
			
fclean:		clean
			$(RM) $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex06 $(PINK)successfully cleaned! $(RESET)\n"
			
re:			fclean $(NAME)

.PHONY:		all clean fclean re