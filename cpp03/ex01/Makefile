NAME = ScavTrap
CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -std=c++98
RM = rm -f

SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp
D_OBJ = obj/
OBJS = $(addprefix $(D_OBJ), $(SRC:.cpp=.o))
DEPS = $(addprefix $(D_OBJ), $(SRC:.cpp=.d))

$(D_OBJ)%.o: %.cpp Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all: dir $(NAME)

dir:
	@mkdir -p obj/

-include $(DEPS)
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS) $(DEPS)
	$(RM) -r $(D_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all dir clean fclean re