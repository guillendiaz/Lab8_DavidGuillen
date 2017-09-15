#include "Guerrero.h"

Guerrero::Guerrero(){

}

Guerrero::Guerrero(string pNombre){
	this->Clase = "Guerrero";
	this->Nombre = pNombre;
	this->HP = 120;
	this->AtaqueMagico = 0;
	this->AtaqueFisico = 15;
	this->DefensaMagica = 0;
	this->DefensaFisica = 0.30;
	this->ExpNecesaria = 100;
	this->Exp = 0;
	this->ExpEnt = 50;
}

void Guerrero::HabilidadPasiva(){

}

void Guerrero::HabilidadEspecial(int ValUso, int){
	if (ValUso == 0){
		cout<<"Habilidad Especial: Regenerar 40 HP"<<endl;
		this->HP += 40;	
	}else{
		cout<<"Habilidad solo una vez por Pelea"<<endl;
	}
	
	
}

string Guerrero::toString(){
	return "Clase: " + Clase + " Nombre: " +  Nombre + " HP: " + to_string(HP);
}

Guerrero::~Guerrero(){

}