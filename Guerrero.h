#ifndef GUERRERO_H
#define GUERRERO_H
#include "Luchador.h"

class Guerrero : public Luchador{
	protected:
		
	public:
		Guerrero();
		Guerrero(string);
		void HabilidadPasiva();
		void HabilidadEspecial(int, int);
		string toString();
		~Guerrero();
};

#endif