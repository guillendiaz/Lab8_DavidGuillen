#ifndef LUCHADOR_H
#define LUCHADOR_H
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Luchador{
	protected:
		string Nombre, Clase;
		vector<string>ClasesAprendidas;
		int CantBatGan, HP, AtaqueMagico, AtaqueFisico, Exp, ExpNecesaria, ExpEnt;
		double DefensaMagica, DefensaFisica;
	public:
		Luchador();
		Luchador(string);
		void setNombre(string);
		string getNombre();
		void addClasesAprendidas(string);
		string getClasesAprendidas(int);
		void addCantBatGan(int);
		int getCantBatGan();
		void addExp(int);
		int getExp();

		int size();
		int getHP();
		string getClase();
		int getAtaqueMagico();
		int getAtaqueFisico();
		double getDefensaMagica();
		double getDefensaFisica();
		int getExpNecesaria();
		int getExpEnt();

		virtual int HabilidadPasiva();
		virtual int HabilidadEspecial(int, int);
		virtual string toString();
		~Luchador();
};

#endif