#include "Luchador.h"

Luchador::Luchador(){

}

Luchador::Luchador(string pNombre){
	this->Nombre = pNombre;
}

void Luchador::setNombre(string pNombre){
	this->Nombre = pNombre;
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
	this->CantBatGan += pCant;
}

int Luchador::getCantBatGan(){
	return CantBatGan;
}

void Luchador::addExp(int pExp){
	this->Exp += pExp;
}

int Luchador::getExp(){
	return Exp;
}

int Luchador::size(){
	return ClasesAprendidas.size();
}

void Luchador::setHP(int pHP){
	this->HP = pHP;
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

void Luchador::setAtaqueFisico(double pAtaqueFisico){
	this->AtaqueFisico = pAtaqueFisico;
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


int Luchador::HabilidadPasiva(int, int){

}

int Luchador::HabilidadEspecial(int, int){

}

string Luchador::toString(){
	
}

bool Luchador::equals(Luchador* other)const{
	return other==this;

}

Luchador::~Luchador(){

}