all: main

main: main.cpp
	clang++ -g -std=c++1y  main.cpp -o main

run: all
	./main | c++filt -t

clean:
	rm -rf main

