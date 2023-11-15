CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp
EXEC = combat

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

.PHONY: clean fclean

clean:
	rm -f $(EXEC)

re: clean all