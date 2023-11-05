# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/05 13:52:46 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/05 15:07:08 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= zombie

SRC			= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic #-std=c++98

RM			= rm -rf

PRINTF		= printf

PURPLE		:= \033[0;34m
PINK		:= \033[0;35m
RESET		:= \033[0m

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex00 $(PINK)successfully compiled! $(RESET)\n"

clean:
			$(RM) $(OBJ)

fclean:		clean
			@$(RM) $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex00 $(PINK)successfully cleaned! $(RESET)\n"
			
re:			fclean $(NAME)

.PHONY:		all clean fclean re