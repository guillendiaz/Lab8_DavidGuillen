#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include "Luchador.h"
#include "Aprendiz.h"
#include "Guerrero.h"
#include "Mago.h"
#include "Alquimista.h"
#include "DragonBorn.h"

using namespace std;
int Menu();
//Se ingresa al Menu()
void Simulacion(vector<Luchador*>, int, int);
int main(){
	vector<Luchador*> luchadores;
	int opcion;
	do{
		switch(opcion=Menu()){
			case 1:{
				string nombre;
				cout<<"Ingrese Nombre: ";
				cin>>nombre;
				Luchador* lu = new Aprendiz(nombre);
				lu->addClasesAprendidas(lu->getClase());
				luchadores.push_back(lu);
			}
				break;
			case 2:{
				for (int i = 0; i <= luchadores.size()-1; ++i){
					cout<<i<<". "<<luchadores.at(i)->toString();
				}
			}
				break;
			case 3:{
				int pos;
				string nuevonom;
				cout<<"Ingrese Posición: ";
				cin>>pos;
				cout<<"Ingrese Nuevo Nombre: ";
				cin>>nuevonom;

				luchadores.at(pos)->setNombre(nuevonom);
			}
				break;
			case 4:{
				int pos1, pos2;
				string nuevonom;
				cout<<"Ingrese Posición 1: ";
				cin>>pos1;
				cout<<"Ingrese Posición 2: ";
				cin>>pos2;
				cout<<"Inicio de Simulación"<<endl;
				Simulacion(luchadores, pos1, pos2);
			}
				break;
		}//switch()
	}while(opcion!=5);
	return 0;	
}

int Menu(){
	int opcion = 0;

	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1. Añadir Luchador"<<endl
			<<"2. Listar Luchador"<<endl
			<<"3. Modificar Luchador"<<endl
			<<"4. Simulación"<<endl
			<<"5. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 5){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()

void Simulacion(vector<Luchador*>luch, int pos1, int pos2){
	srand(time(NULL));
	int UsoHabil = 0, isDrag = 0, Veri = 0, turno=0, random, random2, HPLu1 = 0, HPLu2 = 0;
	HPLu1 = luch.at(pos1)->getHP();
	HPLu2 = luch.at(pos2)->getHP();
	do{
		//Inicio de la Simulacion
		//Primer Luchador
		//Decidir que Hacer
		
		random = rand()%4;
		switch(random){
			case 0:
				luch.at(pos2)->setHP(luch.at(pos2)->getHP() - luch.at(pos1)-> getAtaqueMagico());
				break;
			case 1:
				luch.at(pos2)->setHP(luch.at(pos2)->getHP() - luch.at(pos1)-> getAtaqueFisico());
				break;
			case 2:
				luch.at(pos1)->setHP(luch.at(pos1)->getHP() + (luch.at(pos1)->getHP() * 0.45));
				break;
			case 3:
				int randomHab = rand()%4;
				do{
					switch(0){
						case 0:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos1)->size()-1; ++i){
								if (luch.at(pos1)->getClasesAprendidas(i) == "Guerrero"){
									Luchador* LuTem = new Guerrero();
									luch.at(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 1:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos1)->size()-1; ++i){
								if (luch.at(pos1)->getClasesAprendidas(i) == "Mago"){
									Luchador* LuTem = new Mago();
									luch.at(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 2:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos1)->size()-1; ++i){
								if (luch.at(pos1)->getClasesAprendidas(i) == "Alquimista"){
									Luchador* LuTem = new Alquimista();
									luch.at(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 3:
							UsoHabil = 1;
							Veri = turno;
							isDrag = 1;
							for (int i = 0; i <=luch.at(pos1)->size()-1; ++i){
								if (luch.at(pos1)->getClasesAprendidas(i) == "DragonBorn"){
									Luchador* LuTem = new DragonBorn();
									luch.at(pos1)->setAtaqueFisico(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos1)->getAtaqueFisico()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
				}//switch()2
				} while (UsoHabil != 1);
		}//switch()
		if (isDrag == 1 && turno == Veri+2){
			luch.at(pos1)->setAtaqueFisico(luch.at(pos1)->getAtaqueFisico() / 2);
		}

		//Segundo Luchador
		//Decidir que Hacer
		random2 = rand()%3;
		switch(random2){
			case 0:
				luch.at(pos1)->setHP(luch.at(pos1)->getHP() - luch.at(pos2)-> getAtaqueMagico());
				break;
			case 1:
				luch.at(pos1)->setHP(luch.at(pos1)->getHP() - luch.at(pos2)-> getAtaqueFisico());
				break;
			case 2:
				luch.at(pos2)->setHP(luch.at(pos2)->getHP() + (luch.at(pos2)->getHP() * 0.45));
				break;
			case 3:
				int randomHab = rand()%4;
				do{
					switch(randomHab){
						case 0:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos2)->size()-1; ++i){
								if (luch.at(pos2)->getClasesAprendidas(i) == "Guerrero"){
									Luchador* LuTem = new Guerrero();
									luch.at(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 1:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos2)->size()-1; ++i){
								if (luch.at(pos2)->getClasesAprendidas(i) == "Mago"){
									Luchador* LuTem = new Mago();
									luch.at(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 2:
							UsoHabil = 1;
							for (int i = 0; i <=luch.at(pos2)->size()-1; ++i){
								if (luch.at(pos2)->getClasesAprendidas(i) == "Alquimista"){
									Luchador* LuTem = new Alquimista();
									luch.at(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 3:
							UsoHabil = 1;
							Veri = turno;
							isDrag = 1;
							for (int i = 0; i <=luch.at(pos2)->size()-1; ++i){
								if (luch.at(pos2)->getClasesAprendidas(i) == "DragonBorn"){
									Luchador* LuTem = new DragonBorn();
									luch.at(pos2)->setAtaqueFisico(LuTem->HabilidadEspecial(UsoHabil, luch.at(pos2)->getAtaqueFisico()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
				}//switch()2
				} while (UsoHabil != 1);
		}//switch()
		if (isDrag == 1 && turno == Veri+2){
			luch.at(pos2)->setAtaqueFisico(luch.at(pos2)->getAtaqueFisico() / 2);
		}

		if (luch.at(pos1)->getHP() <= 0){
			luch.at(pos1)->setHP(0);
			luch.at(pos2)->setHP(HPLu2);
			cout<<luch.at(pos1)->getNombre()<<" Ha Perdido!"<<endl;
			cout<<luch.at(pos2)->getNombre()<<" Ha Ganado!"<<endl;
		}else if (luch.at(pos2)->getHP() <= 0){
			luch.at(pos2)->setHP(0);
			luch.at(pos1)->setHP(HPLu1);
			cout<<luch.at(pos2)->getNombre()<<" Ha Perdido!"<<endl;
			cout<<luch.at(pos1)->getNombre()<<" Ha Ganado!"<<endl;
		}
		turno++;
	} while ((luch.at(pos1)->getHP() != 0) && (luch.at(pos2)->getHP() != 0));
	cout<<"Fin de la Simulación"<<endl;
}//Simulacion()
