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
	int UsoHabil = 0;
	do{
		//Inicio de la Simulacion
		cout<<"Turno de : "<<luch.at(pos1)->getNombre();
		//Decidir que Hacer
		int random = rand()%4;
		switch(random){
			case 0:
				luch.at(pos2)->setHP(luch.at(pos2)->getHP() - luch.at(pos1)-> getAtaqueMagico());
				break;
			case 1:
				luch.at(pos2)->setHP(luch.at(pos2)->getHP() - luch.at(pos1)-> getAtaqueFisico());
				break;
			case 2:
				luch.at(pos1)->setHP(luch.at(pos1)->getHP + (luch.at(pos1)->getHP * 0.45));
				break;
			case 3:
				int randomHab = rand()%4;
				switch(randomHab){
					case 1:
						for (int i = 0; i <=luch.at(pos1)->size()-1; ++i){
							
						}
						break;
				}//switch()2

		}//switch()
	} while (luch.at(pos1)->getHP() != 0 || luch.at(pos2)->getHP() != 0 );
}//Simulacion()
