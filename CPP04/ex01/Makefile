CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98 -g

NAME = Animals

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CFLAG) $(OBJECTS) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "Compiling $<!"
	@$(CC) $(CFLAG) -c $< -o $@

clean:
	@rm -rf obj
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: clean all
.PHONY: all clean fclean re
