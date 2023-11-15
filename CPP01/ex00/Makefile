CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
EXEC = zombie

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

.PHONY: clean fclean

clean:
	rm -f $(EXEC)

re: clean all