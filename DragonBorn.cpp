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
int DragonBorn::HabilidadPasiva(){

}

int DragonBorn::HabilidadEspecial(int ValUso, int pAtaque){
	if (ValUso == 0){
		cout<<"Habilidad Especial: Multiplicar ataque físico"<<endl;
		return pAtaque * 2;	
	}else{
		return 0;
	}	
	
}

string DragonBorn::toString(){
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

DragonBorn::~DragonBorn(){

}