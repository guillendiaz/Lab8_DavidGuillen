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
	this->Exp = ExpEnt;
}

int Guerrero::HabilidadPasiva(){

}

int Guerrero::HabilidadEspecial(int ValUso, int HP){
	if (ValUso == 0){
		cout<<"Habilidad Especial: Regenerar 40 HP"<<endl;
		return HP + 40;	
	}else{
		cout<<"Habilidad solo una vez por Pelea"<<endl;
		return 0;
	}
	
	
}

string Guerrero::toString(){
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

Guerrero::~Guerrero(){

}