CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = replace

SRC =main.cpp SearchAndReplace.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo "The order of the parameters needed by the program are;"
	@echo "./program filename s1 s2"

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "Compiling $<!"
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf obj
	@clear

fclean: clean
	@rm -r $(NAME)
	@clear

re: clean all
.PHONY: all clean fclean re
