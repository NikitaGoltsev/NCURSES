all:
	g++ main.cpp -lncurses -Werror
	./a.out
	rm a.out