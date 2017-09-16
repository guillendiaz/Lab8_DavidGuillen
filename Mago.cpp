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
	string RetStr;
	RetStr =	+"Nombre:         | "+ Nombre +"\n"
				+"   Clase:          | "+ Clase +"\n"
				+"   HP:             | "+ to_string(HP) +"\n"
				+"   Ataque Magico:  | "+ to_string(AtaqueMagico)+"\n"
				+"   Ataque Fisico:  | "+ to_string(AtaqueFisico)+"\n"
				+"   Defensa Magica: | "+ to_string(DefensaMagica) +"\n"
				+"   Defensa Fisica: | "+ to_string(DefensaFisica) +"\n"
				+"\n";
	return RetStr;
}

Mago::~Mago(){

}