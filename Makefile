homework1 : main.o hello.o 
	g++ main.o hello.o -o homework1

hello.o : hello.cpp
	g++ -c hello.cpp  
main.o : main.cpp
	g++ -c main.cpp
