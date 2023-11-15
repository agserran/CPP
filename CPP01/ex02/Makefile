CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp
EXEC = main

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)

.PHONY: clean fclean

clean:
	rm -f $(EXEC)

re: clean all