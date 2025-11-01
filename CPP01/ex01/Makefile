CC = c++
CPPFLAGS = -Wall -Werror -Wextra -g -std=c++98

NAME = zombie

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME) : $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "Compiling $<!"
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	@rm -rf obj
	@clear

fclean : clean
	@rm -r $(NAME)
	@clear

re: fclean all

.PHONY: all clean fclean re
