#include <iostream>
#include <string>
#include "Luchador.h"
#include "Aprendiz.h"
#include "Guerrero.h"
#include "Mago.h"
#include "Alquimista.h"
#include "DragonBorn.h"

using namespace std;

int main(){
	Aprendiz l("Manolo");
	cout<<l.getClase()<<endl;
	cout<<l.getHP()<<endl;
	l.addClasesAprendidas(l.getClase());
	Guerrero g("Manolo");
	l.addClasesAprendidas(g.getClase());
	cout<<l.toString()<<endl;
	cout<<l.getClasesAprendidas(0)<<endl;
	cout<<l.getClasesAprendidas(1)<<endl;
	return 0;
}