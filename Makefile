main: main.cpp words.cpp Makefile
	g++ main.cpp words.cpp -o main -g -Wall -std=c++20


.PHONY: clean


clean:
	rm -f main