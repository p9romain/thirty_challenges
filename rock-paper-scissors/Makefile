CXX = g++
CXXFLAGS = -g -W -Wall -std=c++2a -O3
LDFLAGS =
EXEC_FILES = main app
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

ARGS = $(filter-out $@, $(MAKECMDGOALS))

BIN = $(CXX) $(CXXFLAGS) -c $<
EXE = $(CXX) $(LDFLAGS) -o $@ $^ 

# Binary files
%.o: %.cpp
	@$(BIN)

# Execitive files
main: main.o utilities.o type.o game.o
	@$(EXE)

app: utilities.o type.o game.o
	@$(EXE) -lsfml-graphics -lsfml-windows -lsfml-system

# Headers
main app game: game.hpp
type game: type.hpp
utilities game: utilities.hpp

# Utilities
all: clean main
	@clear
	@./main

clean clear:
	@rm -rf $(OBJ) $(EXEC_FILES)

exe: app