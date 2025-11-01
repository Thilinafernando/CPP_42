CC = c++
CPPFLAGS = -Wall -Wextra -g -Werror -std=c++98

NAME = HarlFilter

SRC = Harl.cpp main.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all : $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)
	@echo  "What do you want Harl to do? Please enter one of the levels as an argument!"

obj/%.o: %.cpp
	@mkdir -p $(dir $@);
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
