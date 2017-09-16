main: main.o Luchador.o Aprendiz.o Guerrero.o Mago.o Alquimista.o DragonBorn.o ADTList.o LinkedList.o nodo.o
	g++ main.o Luchador.o Aprendiz.o Guerrero.o Mago.o Alquimista.o DragonBorn.o ADTList.o LinkedList.o nodo.o -o main

main.o: main.cpp Luchador.h Aprendiz.h Guerrero.h Mago.h Alquimista.h DragonBorn.h ADTList.h LinkedList.h nodo.h
	g++ -c main.cpp

Luchador.o: Luchador.h Luchador.cpp
	g++ -c Luchador.cpp

Aprendiz.o: Aprendiz.h Aprendiz.cpp
	g++ -c Aprendiz.cpp

Guerrero.o: Guerrero.h Guerrero.cpp
	g++ -c Guerrero.cpp

Mago.o: Mago.h Mago.cpp
	g++ -c Mago.cpp

Alquimista.o: Alquimista.h Alquimista.cpp
	g++ -c Alquimista.cpp 

DragonBorn.o: DragonBorn.h DragonBorn.cpp
	g++ -c DragonBorn.cpp

LinkedList.o:	ADTList.h LinkedList.cpp LinkedList.h
	g++ -c LinkedList.cpp

ADTList.o:	ADTList.h ADTList.cpp Luchador.h
	g++ -c ADTList.cpp

nodo.o:	nodo.h nodo.cpp
	g++ -c nodo.cpp

clean:
	rm *.o main