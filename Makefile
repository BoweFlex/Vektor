.PHONY: all clean run debug

CC = g++
SRC = $(wildcard src/*.cpp)
DEP = $(wildcard h/*.h)
OBJ = $(patsubst %.cpp, %.o, $(wildcard src/*.cpp))
FLAGS = -Wall

all: Vektor

run: all
	./Vektor

debug: $(OBJ)
	$(CC) -g -o vektor.dbg $^ $(FLAGS)
	gdb vektor.dbg

Vektor: $(OBJ)
	$(CC) -o $@ $^ $(FLAGS)

clean: 
	rm -f src/*.o
