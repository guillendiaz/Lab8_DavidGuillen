#ifndef APRENDIZ_H
#define APRENDIZ_H
#include "Luchador.h"

class Aprendiz : public Luchador{
	protected:
		
	public:
		Aprendiz();
		Aprendiz(string);
		int HabilidadPasiva(int, int);
		int HabilidadEspecial(int, int);
		string toString();
		~Aprendiz();
};

#endif