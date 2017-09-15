#ifndef ALQUIMISTA_H
#define ALQUIMISTA_H
#include "Luchador.h"

class Alquimista : public Luchador{
	protected:
		
	public:
		Alquimista();
		Alquimista(string);
		void HabilidadPasiva();
		void HabilidadEspecial(int, int);
		string toString();
		~Alquimista();
};

#endif