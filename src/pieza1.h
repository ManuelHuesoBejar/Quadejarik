#pragma once

#include <iostream>

using namespace std;

enum pieza_t { DAMA = 0, REY, ALFIL, CABALLO, TORRE, PEON };
enum color_t { BLANCO = 1, NEGRO = -1 };

class pieza {

	pieza_t Pieza;
	color_t Color;

public:

	pieza(color_t c, pieza_t p) : Color(c), Pieza(p) {};//constructor
	void dibuja();

	//funciones get para devolver los valores privados de la pieza
	color_t get_Color();
	pieza_t get_Pieza();

};