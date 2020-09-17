.PHONY: all clean run debug

CC = g++
SRC = /src/*.cpp
DEP = /h/*.h
FLAGS = -Wall


%.o: %.c $(DEP)

