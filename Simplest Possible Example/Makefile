# In order to use gcc, you need to link with the c++ standard library.
# Alternatively you could compile everything with g++
main: main.c cpp_funcs.o cpp_funcs.h
	gcc -Wall -o main cpp_funcs.o main.c -lstdc++ 

cpp_funcs.o: cpp_funcs.cpp cpp_funcs.h
	g++ -Wall -c -static cpp_funcs.cpp

clean:
	rm *.o main

