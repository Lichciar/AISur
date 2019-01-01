all: AISur

AISur: Main.o Roboday.o
	g++ Main.o Roboday.o -o AISur.current
	rm -rf *.o

Main.o: Main.cpp
	g++ -c Main.cpp

Roboday.o: Roboday.cpp
	g++ -c Roboday.cpp

clean:
	rm -rf *.o AISur.current