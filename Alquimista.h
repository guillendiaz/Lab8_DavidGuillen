#ifndef ALQUIMISTA_H
#define ALQUIMISTA_H
#include "Luchador.h"

class Alquimista : public Luchador{
	protected:
		
	public:
		Alquimista();
		Alquimista(string);
		int HabilidadPasiva();
		int HabilidadEspecial(int, int);
		string toString();
		~Alquimista();
};

#endif