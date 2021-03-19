all: dog.o flea.o main.o
	g++ -o -std=c++11 dogflea dog.cpp flea.cpp main.cpp

dog.o: dog.cpp
	g++ -c -std=c++11 dog.cpp 

flea.o: flea.cpp
	g++ -c -std=c++11 flea.cpp 

main.o: main.cpp
	g++ -c -std=c++11 main.cpp 


clean:
	rm -f *.o dogflea