#include "Alquimista.h"

Alquimista::Alquimista(){

}

Alquimista::Alquimista(string pNombre){
	this->Clase = "Alquimista";
	this->Nombre = pNombre;
	this->HP = 130;
	this->AtaqueMagico = 10;
	this->AtaqueFisico = 10;
	this->DefensaMagica = 0.20;
	this->DefensaFisica = 0.20;
	this->ExpNecesaria = 300;
	this->Exp = 0;
	this->ExpEnt = 100;
}

void Alquimista::HabilidadPasiva(){

}

void Alquimista::HabilidadEspecial(int ValUso, int Danio){
	if (ValUso = 0){
		cout<<"Habilidad Especial: Invulnerabilidad por un turno"<<endl;
		this->HP += Danio;
	}else{
		cout<<"Habilidad Especial: Deshacer el daño recibido en el ultimo turno"<<endl;
	}
}

string Alquimista::toString(){
	return "Clase: " + Clase + " Nombre: " +  Nombre + " HP: " + to_string(HP);
}

Alquimista::~Alquimista(){

}