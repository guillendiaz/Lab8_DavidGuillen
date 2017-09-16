#ifndef DRAGONBORN_H
#define DRAGONBORN_H
#include "Luchador.h"

class DragonBorn : public Luchador{
	protected:
		
	public:
		DragonBorn();
		DragonBorn(string);
		int HabilidadPasiva();
		int HabilidadEspecial(int, int);
		string toString();
		~DragonBorn();
};

#endif