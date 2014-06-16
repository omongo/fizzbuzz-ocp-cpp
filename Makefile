all: fizzbuzz.o
	clang++ -std=c++11 -o main main.cpp fizzbuzz.o 
test: fizzbuzz.o
	clang++ -std=c++11 -lCppUTest -o test test.cpp fizzbuzz.o
fizzbuzz.o:
	clang++ -std=c++11 -c fizzbuzz.cpp
clean:
	rm -rf *.o main test
