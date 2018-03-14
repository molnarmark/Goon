# Terrible Makefile but hey, im a newbie

all:
	g++ -std=c++0x -Wall -o goon src/main.cpp src/Goon.h src/Goon.cpp src/AST.h src/AST.cpp src/Lexer.h src/Lexer.cpp src/Parser.h src/Parser.cpp src/consts.h

clean:
	rm *.o *.exe