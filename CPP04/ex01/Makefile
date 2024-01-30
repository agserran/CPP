CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC =   animal.cpp      cat.cpp         dog.cpp         main.cpp        wrongAnimal.cpp wrongCat.cpp
EXEC =  Animal

all: $(EXEC)

$(EXEC): $(SRC)
		$(CXX) $(CXXFLAGS) -o $@ $(SRC)
.PHONY: clean fclean

clean:
		rm -f $(EXEC)
fclean: clean

re: clean all