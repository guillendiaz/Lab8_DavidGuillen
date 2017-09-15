#ifndef MAGO_H
#define MAGO_H
#include "Luchador.h"

class Mago : public Luchador{
	protected:
		
	public:
		Mago();
		Mago(string);
		void HabilidadPasiva();
		void HabilidadEspecial(int, int);
		string toString();
		~Mago();
};

#endif