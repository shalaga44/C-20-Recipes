all: main

main: main.cpp
	clang++ -g -std=c++1y -Iboost_1_73_0 main.cpp -o main

run: all
	./main

clean:
	rm -rf main

