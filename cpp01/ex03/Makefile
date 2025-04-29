# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/16 08:58:44 by gabastos          #+#    #+#              #
#    Updated: 2025/04/16 09:43:49 by gabastos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = attack

SRC = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re