# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 01:38:45 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/04 01:38:46 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone

SRC			= megaphone.cpp
OBJ			= $(SRC:.cpp=.o)
CC			= c++
RM			= rm -rf
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

all:		$(NAME)

$(NAME):	$(OBJ) Makefile
			$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
			$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re