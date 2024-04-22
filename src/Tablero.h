#pragma once
#include "pieza1.h"

enum class Modo{ALAMOS, SILVERMAN};

constexpr int filas = 4;
constexpr int columnas = 4;

class tablero {

public:

	pieza* tabl[columnas][filas];

	tablero(Modo m);//constructor
	~tablero();//destructor

	void dibuja();

	int get_filas();
	int get_columnas();
};