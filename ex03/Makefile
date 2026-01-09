# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpollast <gpollast@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/18 11:36:06 by gpollast          #+#    #+#              #
#    Updated: 2026/01/09 20:21:26 by gpollast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = human_attack

SRCS =	src/main.cpp \
		src/Weapon.cpp \
		src/HumanA.cpp \
		src/HumanB.cpp

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -I./includes -g

OBJ_DIR = obj
OBJ = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

all : $(NAME)

$(NAME): $(OBJ)
		$(C++) $(C++_FLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
		mkdir -p $(@D)
		$(C++) $(C++_FLAGS) -c $< -o $@

clean : 
		rm -rf $(OBJ_DIR)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
