all: kwic
 
kwic: main.o outputData.o inputData.o circularShift.o alphabetics.o
	g++ -o bin/main obj/main.o obj/outputData.o obj/inputData.o obj/circularShift.o obj/alphabetics.o -g -Wall
 
main.o: src/main.cpp 
	g++ -c src/main.cpp -o obj/main.o -g -Wall 
 
outputData.o: src/outputData.cpp include/outputData.hpp
	g++ -c src/outputData.cpp -o obj/outputData.o -g -Wall
 
inputData.o: src/inputData.cpp include/inputData.hpp
	g++ -c src/inputData.cpp -o obj/inputData.o -g -Wall

circularShift.o: src/circularShift.cpp include/circularShift.hpp
	g++ -c src/circularShift.cpp -o obj/circularShift.o -g -Wall

alphabetics.o: src/alphabetics.cpp include/alphabetics.hpp
	g++ -c src/alphabetics.cpp -o obj/alphabetics.o -g -Wall