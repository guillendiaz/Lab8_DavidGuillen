#include "Mago.h"

Mago::Mago(){

}

Mago::Mago(string pNombre){
	this->Clase = "Mago";
	this->Nombre = pNombre;
	this->HP = 100;
	this->AtaqueMagico = 15;
	this->AtaqueFisico = 0;
	this->DefensaMagica = 0.30;
	this->DefensaFisica = 0;
	this->ExpNecesaria = 200;
	this->Exp = 0;
	this->ExpEnt = 75;
}

void Mago::HabilidadPasiva(){

}

void Mago::HabilidadEspecial(int ValUso, int Danio){
	if (ValUso == 0){
		cout<<"Habilidad Especial: Deshacer el daño recibido en el ultimo turno"<<endl;
		this->HP += Danio;
	}else{
		cout<<"Habilidad Especial: Deshacer el daño recibido en el ultimo turno"<<endl;
	}
}

string Mago::toString(){
	return "Clase: " + Clase + " Nombre: " +  Nombre + " HP: " + to_string(HP);
}

Mago::~Mago(){

}