CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Harl.cpp main.cpp
EXEC = Harl

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) -o $@ $(SRC)

.PHONY: clean fclean

clean:
		rm -f $(EXEC)

re: clean all