# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 19:41:03 by hbalasan          #+#    #+#              #
#    Updated: 2023/12/02 21:11:12 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed

SRC			= main.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= g++
CPPFLAGS	= -Wall -Wextra -Werror -pedantic

RM			= rm -rf

PRINTF		= printf

PURPLE		:= \033[0;34m
PINK		:= \033[0;35m
RESET		:= \033[0m

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex00 $(PINK)successfully compiled! $(RESET)\n"

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)
			@$(PRINTF) "\r%100s\r$(PINK)☽ $(PURPLE)ex00 $(PINK)successfully cleaned! $(RESET)\n"


re:			fclean $(NAME)

.PHONY:		all clean fclean re