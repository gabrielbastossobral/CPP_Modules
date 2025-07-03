# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 10:47:53 by gabastos          #+#    #+#              #
#    Updated: 2025/07/02 15:57:57 by gabastos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Intern
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD
RM = rm -f

SRCS = Bureaucrat.cpp AForm.cpp main.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
D_OBJS = obj/
OBJS = $(addprefix $(D_OBJS), $(SRCS:.cpp=.o))
DEPS = $(addprefix $(D_OBJS), $(SRCS:.cpp=.d))

$(D_OBJS)%.o : %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: dir $(NAME)

dir:
	@mkdir -p obj/

-include $(DEPS)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(DEPS)
	$(RM) -r obj/
	$(RM) Garden_shrubbery
	$(RM) BackYard_shrubbery

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all dir clean fclean re