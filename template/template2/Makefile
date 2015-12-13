main : main.o template2.o
	g++ -o main template2.o main.o
main.o : main.cpp
	g++ -c main.cpp
template2.o : template2.cpp template2.h
	g++ -c template2.cpp
clean :
	-rm *.o main
