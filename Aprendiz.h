#ifndef APRENDIZ_H
#define APRENDIZ_H
#include "Luchador.h"

class Aprendiz : public Luchador{
	protected:
		
	public:
		Aprendiz();
		Aprendiz(string);
		void HabilidadPasiva(int, int);
		void HabilidadEspecial();
		string toString();
		~Aprendiz();
};

#endif