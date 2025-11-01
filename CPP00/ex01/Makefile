CC = c++
CPPFLAGS = -Werror -Wextra -Wall -std=c++98
NAME = phonebook
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJECTS = $(addprefix obj/, $(notdir $(SRC:.cpp=.o)))

all: $(NAME)

$(NAME) : $(OBJECTS)
	@$(CC) $(CPPFLAGS) $(OBJECTS) -o $(NAME)

obj/%.o: %.cpp
	@mkdir -p $(dir $@)
	@echo "Compiling $<!"
	@$(CC) $(CPPFLAGS) -c $< -o $@

clean:
	rm -rf obj $(NAME)

re : clean all

.PHONY = all clean re
