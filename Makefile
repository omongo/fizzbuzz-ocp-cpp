all: fizzbuzz.o rule.o
	clang++ -std=c++11 -o main main.cpp fizzbuzz.o rule.o
test: fizzbuzz.o rule.o
	clang++ -std=c++11 -lCppUTest -o test test.cpp fizzbuzz.o rule.o
fizzbuzz.o:
	clang++ -std=c++11 -c fizzbuzz.cpp
rule.o:
	clang++ -std=c++11 -c rule.cpp
clean:
	rm -rf *.o main test
