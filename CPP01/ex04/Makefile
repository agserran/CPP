CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = files.cpp
EXEC = files

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) -o $@ $(SRC)

.PHONY: clean fclean

clean:
		rm -f $(EXEC)

re: clean all