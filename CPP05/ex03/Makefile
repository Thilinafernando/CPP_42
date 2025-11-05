CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -g

NAME = Bureaucrat

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp  RobotomyRequestForm.cpp  PresidentialPardonForm.cpp Intern.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

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
