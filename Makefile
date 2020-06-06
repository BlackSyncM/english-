g = g++
CFLAGS = -Wall -Werror -MP -MMD -I -std=c++11

.PHONY: clean run all

all: ./bin/english.exe


./bin/english.exe: ./build/main.o ./build/menu.o ./build/Themeinterface.o ./build/read.o ./build/test.o 
	$(g) $(CFLAGS) -o ./bin/english.exe ./build/main.o ./build/menu.o ./build/Themeinterface.o ./build/read.o ./build/test.o -lm

./build/main.o: ./src/main.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o build/main.o -c src/main.cpp -lm
	
./build/menu.o: ./src/menu.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o ./build/menu.o -c ./src/menu.cpp -lm 
	
./build/Themeinterface.o: ./src/Themeinterface.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o ./build/Themeinterface.o -c ./src/Themeinterface.cpp -lm
	
./build/read.o: ./src/read.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o ./build/read.o -c ./src/read.cpp -lm
	 	
./build/test.o: ./src/test.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o ./build/test.o -c ./src/test.cpp -lm
	

test: ./bin/english-test.exe

./bin/english-test.exe: ./build/test/test.o  ./build/read.o  ./src/test.h  ./src/menu.h
	$(g) $(CFLAGS) -o ./bin/english-test.exe ./build/test/test.o ./build/read.o -lm  

./build/test/test.o: ./test/test.cpp ./src/test.h ./src/menu.h
	$(g) $(CFLAGS) -o ./build/test/test.o -c ./test/test.cpp -lm 

runtest:
	./bin/english-test.exe	
	
clean:
	rm -rf build/*.o build/*.d build/test/*.o build/test/*.d

