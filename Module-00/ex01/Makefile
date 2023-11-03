# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbalasan <hbalasan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/04 01:38:21 by hbalasan          #+#    #+#              #
#    Updated: 2023/11/04 01:38:22 by hbalasan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= crappy

SRCS			= $(wildcard *.cpp)
HEADER			= $(wildcard *.hpp)
OBJ_DIR			= obj
OBJS			= $(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRCS))
CC				= c++
RM				= rm -rf
CFLAGS			= -Wall -Wextra -Werror -std=c++98 -pedantic
MK				= mkdir -p

all:			$(OBJ_DIR) $(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

$(OBJ_DIR): 
				$(MK) $(OBJ_DIR)

$(OBJ_DIR)/%.o:	%.cpp Makefile $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

clean:			
				$(RM) $(OBJ_DIR)

fclean:			clean
				$(RM) $(NAME)
				
re:				fclean all

.PHONY:			all clean fclean re