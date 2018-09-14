main: Main.o Aldeano.o Caballeria.o Casa.o Castillo.o Civ.o Cuartel.o Edificio.o Guerrero.o Jugador.o Soldado.o Tropa.o 
	g++ Main.o Aldeano.o Caballeria.o Casa.o Castillo.o Civ.o Cuartel.o Edificio.o Guerrero.o Jugador.o Soldado.o Tropa.o -o main
	rm *.o

Main.o: Main.cpp Aldeano.cpp Caballeria.cpp Casa.cpp Castillo.cpp Civ.cpp Cuartel.cpp Edificio.cpp Guerrero.cpp Jugador.cpp Soldado.cpp Tropa.cpp
	g++ -c Main.cpp

Aldeano.o: Aldeano.cpp
	g++ -c Aldeano.cpp

Caballeria.o: Caballeria.cpp Tropa.cpp
	g++ -c Caballeria.cpp

Casa.o: Casa.cpp Edificio.cpp
	g++ -c Casa.cpp

Castillo.o: Castillo.cpp Edificio.cpp
	g++ -c Castillo.cpp

Civ.o: Civ.cpp Aldeano.cpp Caballeria.cpp Casa.cpp Castillo.cpp Cuartel.cpp Edificio.cpp Guerrero.cpp Soldado.cpp Tropa.cpp
	g++ -c Civ.cpp

Cuartel.o: Cuartel.cpp Edificio.cpp
	g++ -c Cuartel.cpp

Edificio.o: Edificio.cpp
	g++ -c Edificio.cpp

Guerrero.o: Guerrero.cpp Tropa.cpp
	g++ -c Guerrero.cpp

Jugador.o: Jugador.cpp Civ.cpp
	g++ -c Jugador.cpp

Soldado.o: Soldado.cpp Tropa.cpp
	g++ -c Soldado.cpp 

Tropa.o: Tropa.cpp
	g++ -c Tropa.cpp 