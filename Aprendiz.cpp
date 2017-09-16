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
	this->DefensaFisica = 0.1;
	this->ExpNecesaria = 0;
	this->Exp = 0;
	this->ExpEnt = 25;
	this->Exp = ExpEnt;
}

int Aprendiz::HabilidadPasiva(int ValUso, int pExp){
	if (ValUso == 1){
		cout<<"Habilidad Pasiva: Gana Doble Exp al Vencer Cualquier Peleador"<<endl;
		return pExp * 2;
	}else{
		return 0;
	}

}

int Aprendiz::HabilidadEspecial(int, int){

}

string Aprendiz::toString(){
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

Aprendiz::~Aprendiz(){

}
