FLAGS = -g -c --std=c++17

all:
		mkdir -p bin
		g++ $(FLAGS) src/envio.cpp -o bin/envio.o

test:
		mkdir -p bin
		g++ $(FLAGS) tests/tests_enviofedex_calculoenvio.cpp -o bin/tests_enviofedex_calculoenvio.o
		g++ $(FLAGS) src/envio.cpp -o bin/envio.o
		g++ $(FLAGS) src/envioFedEX.cpp -o bin/envioFedEX.o
		g++ -g -o bin/tests bin/tests_enviofedex_calculoenvio.o bin/envio.o bin/envioFedEX.o -lgtest -lgtest_main -lpthread 

clean:
		rm -Rf bin