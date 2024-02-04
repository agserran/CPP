CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =   main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
EXEC =  ScavTrap

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) -o $@ $(SRC)
.PHONY: clean fclean

clean:
		rm -f $(EXEC)
		
re: clean all