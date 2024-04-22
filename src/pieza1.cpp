#include "pieza1.h"
#include <iostream>

using namespace std;

void pieza::dibuja() {

	switch (Pieza) {

	case(pieza_t::REY):

		if (Color == color_t::BLANCO) {
			//codigo de dibujo del rey blanco
		}

		else {
			//codigo de dibujo del rey negro
		}
		break;

	case(pieza_t::DAMA):
		if (Color == color_t::BLANCO) {
			//codigo de dibujo de la dama blanca
		}

		else {
			//codigo de dibujo de la dama negra
		}
		break;

	case(pieza_t::CABALLO):
		if (Color == color_t::BLANCO) {
			//codigo de dibujo del caballo blanco
		}

		else {
			//codigo de dibujo del caballo negro
		}
		break;

	case(pieza_t::ALFIL):
		if (Color == color_t::BLANCO) {
			//codigo de dibujo del alfil blanco
		}

		else {
			//codigo de dibujo del alfil negro
		}
		break;

	case(pieza_t::PEON):
		if (Color == color_t::BLANCO) {
			//codigo de dibujo del peon blanco
		}

		else {
			//codigo de dibujo del peon negro
		}
		break;

	}


}

pieza_t pieza::get_Pieza() {

	return Pieza;
}

color_t pieza::get_Color() {

	return Color;
}