CC = c++
FLAGS = -Werror -Wextra -Wall -std=c++98

NAME = log

SRC = Account.cpp tests.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(OBJECTS) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "Compiling $<!"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@rm -rf obj
	@clear

fclean: clean
	@rm -f $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re
