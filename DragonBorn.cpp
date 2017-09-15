#include "DragonBorn.h"

DragonBorn::DragonBorn(){

}

DragonBorn::DragonBorn(string pNombre){
	this->Clase = "DragonBorn";
	this->Nombre = pNombre;
	this->HP = 200;
	this->AtaqueMagico = 25;
	this->AtaqueFisico = 23;
	this->DefensaMagica = 0.20;
	this->DefensaFisica = 0.20;
	this->ExpNecesaria = 400;
	this->Exp = 0;
	this->ExpEnt = 150;
}

void DragonBorn::HabilidadPasiva(){

}

void DragonBorn::HabilidadEspecial(int ValUso, int ValTurno){
	if (ValUso == 0 && ValTurno == 0){
		cout<<"Habilidad Especial: Multiplicar ataque físico"<<endl;
		this->AtaqueFisico *= 2;	
	}else if (ValUso == 1 && ValTurno == 1){
		this->AtaqueFisico /= 2;
	}	
	
}

string DragonBorn::toString(){
	return "Clase: " + Clase + " Nombre: " +  Nombre + " HP: " + to_string(HP);
}

DragonBorn::~DragonBorn(){

}