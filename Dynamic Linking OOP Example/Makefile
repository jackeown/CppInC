# Dynamic Linking Example

# Note the -ldl: this links with the dynamic shared object loader
# So that at runtime main knows to search for CarLib.so and CarLibInterface.so

# Also note the "-Wl,-R.": That is so that the dynamic linker 
# searches the current directory for the shared object files.
main: main.c CarLib.so CarLibInterface.so CarLibInterface.hpp
	gcc -Wl,-R. -Wall main.c CarLib.so CarLibInterface.so -lstdc++ -ldl -o main

CarLibInterface.so: CarLibInterface.cpp CarLibInterface.hpp
	g++ -Wl,-R. -Wall -fPIC -shared CarLibInterface.cpp CarLib.so -o CarLibInterface.so

CarLib.so: CarLib.cpp CarLib.hpp
	g++ -Wall -fPIC -shared CarLib.cpp -o CarLib.so

clean:
	rm *.o *.so main

