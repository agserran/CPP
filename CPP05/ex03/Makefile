CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = AForm.cpp RobotomyRequestForm.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp main.cpp
EXEC =  Form

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) -o $@ $(SRC)
.PHONY: clean fclean

clean:
		rm -f $(EXEC)
fclean: clean

re: clean all