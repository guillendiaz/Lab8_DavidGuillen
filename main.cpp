#include <iostream>
#include <string>
#include <vector>
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