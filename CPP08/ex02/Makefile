CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp
EXEC =  MUTANTSTACK

all: $(EXEC)

$(EXEC): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $(SRC)
.PHONY: clean fclean

clean:
	rm -f $(EXEC)
fclean: clean

re: clean all
