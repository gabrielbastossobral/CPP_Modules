# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 13:43:13 by gabastos          #+#    #+#              #
#    Updated: 2025/04/15 13:45:44 by gabastos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Zombie.hpp

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