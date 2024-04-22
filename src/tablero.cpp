#include "Tablero.h"
#include "pieza1.h"
#include "Coordenadas1.h"

tablero::tablero(Modo m) {
	//asignacion a cada casilla su pieza correspondiente

	if (m == Modo::ALAMOS) {

		//piezas blancas
		tabl[0][0] = new pieza(color_t::BLANCO, pieza_t::ALFIL);
		tabl[1][0] = new pieza(color_t::BLANCO, pieza_t::DAMA);
		tabl[2][0] = new pieza(color_t::BLANCO, pieza_t::REY);
		tabl[3][0] = new pieza(color_t::BLANCO, pieza_t::PEON);

		//piezas negras
		tabl[0][3] = new pieza(color_t::NEGRO, pieza_t::ALFIL);
		tabl[1][3] = new pieza(color_t::NEGRO, pieza_t::DAMA);
		tabl[2][3] = new pieza(color_t::NEGRO, pieza_t::REY);
		tabl[3][3] = new pieza(color_t::NEGRO, pieza_t::PEON);
	}

	else {

		//fila de peones de ambos bandos
		for (int j = 0; j < columnas; j++) {
			tabl[j][1] = new pieza(color_t::BLANCO, pieza_t::PEON);
			tabl[j][2] = new pieza(color_t::NEGRO, pieza_t::PEON);
		}

		//piezas blancas
		tabl[0][0] = new pieza(color_t::BLANCO, pieza_t::TORRE);
		tabl[1][0] = new pieza(color_t::BLANCO, pieza_t::DAMA);
		tabl[2][0] = new pieza(color_t::BLANCO, pieza_t::REY);
		tabl[3][0] = new pieza(color_t::BLANCO, pieza_t::TORRE);

		//piezas negras
		tabl[0][3] = new pieza(color_t::NEGRO, pieza_t::TORRE);
		tabl[1][3] = new pieza(color_t::NEGRO, pieza_t::DAMA);
		tabl[2][3] = new pieza(color_t::NEGRO, pieza_t::REY);
		tabl[3][3] = new pieza(color_t::NEGRO, pieza_t::TORRE);
	}
}

tablero::~tablero() {

	for (int i = 0; i < filas; i++) {

		for (int j = 0; j < columnas; j++) {

			delete tabl[i][j];
		}
	}

	delete tabl;
}

void tablero::dibuja() {

	//codigo dibujo del tablero

}

int tablero::get_columnas() {
	return columnas;
}

int tablero::get_filas() {
	return filas;
}