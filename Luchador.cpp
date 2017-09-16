#include "Luchador.h"

Luchador::Luchador(){

}

Luchador::Luchador(string pNombre){
	Nombre = pNombre;
}

void Luchador::setNombre(string pNombre){
	Nombre = pNombre;
}

string Luchador::getNombre(){
	return Nombre;
}

void Luchador::addClasesAprendidas(string pClase){
	ClasesAprendidas.push_back(pClase);
}

string Luchador::getClasesAprendidas(int pos){
	return ClasesAprendidas.at(pos);
}

void Luchador::addCantBatGan(int pCant){
	CantBatGan += pCant;
}

int Luchador::getCantBatGan(){
	return CantBatGan;
}

void Luchador::addExp(int pExp){
	Exp += pExp;
}

int Luchador::getExp(){
	return Exp;
}

int Luchador::getHP(){
	return HP;
}

string Luchador::getClase(){
	return Clase;
}

int Luchador::getAtaqueMagico(){
	return AtaqueMagico;
}

int Luchador::getAtaqueFisico(){
	return AtaqueFisico;
}

double Luchador::getDefensaMagica(){
	return DefensaMagica;
}

double Luchador::getDefensaFisica(){
	return DefensaFisica;
}

int Luchador::getExpNecesaria(){
	return ExpNecesaria;
}

int Luchador::getExpEnt(){
	return ExpEnt;
}


void Luchador::HabilidadPasiva(){

}

void Luchador::HabilidadEspecial(int, int){

}

string Luchador::toString(){
	
}

Luchador::~Luchador(){

}