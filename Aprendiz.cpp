#include "Aprendiz.h"

Aprendiz::Aprendiz(){

}

Aprendiz::Aprendiz(string pNombre){
	this->Clase = "Aprendiz";
	this->Nombre = pNombre;
	this->HP = 60;
	this->AtaqueMagico = 0;
	this->AtaqueFisico = 10;
	this->DefensaMagica = 0;
	this->DefensaFisica = 0.10;
	this->ExpNecesaria = 0;
	this->Exp = 0;
	this->ExpEnt = 25;
}

void Aprendiz::HabilidadPasiva(int ValUso, int pExp){
	if (ValUso == 1){
		cout<<"Habilidad Pasiva: Gana Doble Exp al Vencer Cualquier Peleador"<<endl;
		this->Exp += pExp * 2;
	}

}

void Aprendiz::HabilidadEspecial(){

}

string Aprendiz::toString(){
	return "Clase: " + Clase + " Nombre: " + Nombre + " HP: " + to_string(HP);
}

Aprendiz::~Aprendiz(){

}
