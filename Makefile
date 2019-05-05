all: AISur

AISur: Main.o Robotime.o
	g++ Main.o Robotime.o -o AISur.current
	rm -rf *.o

Main.o: Main.cpp
	g++ -c Main.cpp

Roboday.o: Robotime.cpp
	g++ -c Robotime.cpp

clean:
	rm -rf *.o AISur.current