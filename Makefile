g = g++
CFLAGS = -Wall -Werror -MP -MMD -I -std=c++17

.PHONY: clean run all

all: ./bin/english.exe


./bin/english.exe: ./build/main.o ./build/menu.o ./build/Themeinterface.o ./build/test.o 
	$(g) $(CFLAGS) -o ./bin/english.exe ./build/main.o ./build/menu.o ./build/Themeinterface.o ./build/test.o -lm

./build/main.o: ./src/main.cpp 
	$(g) $(CFLAGS) -o build/main.o -c src/main.cpp -lm
	
./build/menu.o: ./src/menu.cpp 
	$(g) $(CFLAGS) -o ./build/menu.o -c ./src/menu.cpp -lm 
	
./build/Themeinterface.o: ./src/Themeinterface.cpp ./src/test.h
	$(g) $(CFLAGS) -o ./build/Themeinterface.o -c ./src/Themeinterface.cpp -lm 	
	
./build/test.o: ./src/test.cpp 
	$(g) $(CFLAGS) -o ./build/test.o -c ./src/test.cpp -lm	

clean:
	rm -rf build/*.o build/*.d

run:
	./bin/english.exe
