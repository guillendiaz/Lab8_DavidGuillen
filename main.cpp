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
#include "ADTList.h"
#include "LinkedList.h"
#include <fstream>
using namespace std;

int Menu();
//Se ingresa al Menu()
void Simulacion(ADTList*, int, int);
void VerificarExp(ADTList*, int);
int main(){
	ADTList* list = new LinkedList();
	int opcion;
	do{
		switch(opcion=Menu()){
			case 1:{
				string nombre;
				int pos = 0;
				cout<<"Ingrese Nombre: ";
				cin>>nombre;
				Luchador* lu = new Aprendiz(nombre);
				lu->addClasesAprendidas(lu->getClase());
				if(list->insert(lu,pos)){
					cout<< "Se ha Ingresado!"<<endl
						<<endl;
					pos++;
				}else{
					cout<<"Ocurrio un Error"<<endl
						<<endl;
				}
			}
				break;
			case 2:{
				for (int i = 0; i < list->Size(); ++i){
					cout<<i<<". "<<list->get(i)->toString();
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

				list->get(pos)->setNombre(nuevonom);
			}
				break;
			case 4:{
				int pos1, pos2;
				string nuevonom;
				cout<<"Ingrese Posición 1: ";
				cin>>pos2;
				cout<<"Ingrese Posición 2: ";
				cin>>pos1;
				cout<<endl;
				cout<<"Inicio de Simulación"<<endl
					<<endl;
				Simulacion(list, pos1, pos2);
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
		cout<<endl;
		if(opcion < 1 || opcion > 5){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()

	}//while()

}//Menu()

void Simulacion(ADTList* luch, int pos1, int pos2){
	ofstream Save("Save.txt", ios::app);
	string dato;
	srand(time(NULL));
	int UsoHabil = 0, UsoHabilCent = 0, Turno = 1 , isDrag = 0, Veri = 0, turno=0, random, random2, HPLu1 = 0, HPLu2 = 0;
	HPLu1 = luch->get(pos1)->getHP();
	HPLu2 = luch->get(pos2)->getHP();
	dato = "------------------------------";
	dato+= "\n";
	dato += "Inicio De la Lucha";
	dato +="\n";
	do{
		//Inicio de la Simulacion
		//Primer Luchador
		//Decidir que Hacer
		
		dato += "Turno:"+to_string(Turno) + "\n";
		dato += "Turno de " + luch->get(pos1)->getNombre() + "\n";
		random = rand()%4;
		switch(random){
			case 0:
				dato+= luch->get(pos1)->getNombre() + " Eligio Ataque Magico" + "\n";
				luch->get(pos2)->setHP(luch->get(pos2)->getHP() - luch->get(pos1)-> getAtaqueMagico());
				break;
			case 1:
				dato+= luch->get(pos1)->getNombre() + " Eligio Ataque Fisico" + "\n";
				luch->get(pos2)->setHP(luch->get(pos2)->getHP() - luch->get(pos1)-> getAtaqueFisico());
				break;
			case 2:
				dato+= luch->get(pos1)->getNombre() + " Eligio Defender" + "\n";
				luch->get(pos1)->setHP(luch->get(pos1)->getHP() + (luch->get(pos1)->getHP() * 0.45));
				break;
			case 3:
				dato+= luch->get(pos1)->getNombre() + " Eligio Habilidad Especial" + "\n";
				int randomHab = rand()%4;
				do{
					switch(0){
						case 0:
							
							for (int i = 0; i <=luch->get(pos1)->size()-1; ++i){
								if (luch->get(pos1)->getClasesAprendidas(i) == "Guerrero"){
									Luchador* LuTem = new Guerrero();
									luch->get(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 1:
							
							for (int i = 0; i <=luch->get(pos1)->size()-1; ++i){
								if (luch->get(pos1)->getClasesAprendidas(i) == "Mago"){
									Luchador* LuTem = new Mago();
									luch->get(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 2:
							
							for (int i = 0; i <=luch->get(pos1)->size()-1; ++i){
								if (luch->get(pos1)->getClasesAprendidas(i) == "Alquimista"){
									Luchador* LuTem = new Alquimista();
									luch->get(pos1)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos1)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 3:
							
							Veri = turno;
							isDrag = 1;
							for (int i = 0; i <=luch->get(pos1)->size()-1; ++i){
								if (luch->get(pos1)->getClasesAprendidas(i) == "DragonBorn"){
									Luchador* LuTem = new DragonBorn();
									luch->get(pos1)->setAtaqueFisico(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos1)->getAtaqueFisico()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
				}//switch()2
				UsoHabilCent = 1;
				} while (UsoHabilCent != 1);
				UsoHabilCent = 0;
		}//switch()
		if (isDrag == 1 && turno == Veri+2){
			luch->get(pos1)->setAtaqueFisico(luch->get(pos1)->getAtaqueFisico() / 2);
		}

		//Segundo Luchador
		//Decidir que Hacer
		dato+="\n";
		dato += "Turno de " + luch->get(pos2)->getNombre() + "\n";
		random2 = rand()%3;
		switch(random2){
			case 0:
				dato+= luch->get(pos2)->getNombre() + " Eligio Ataque Magico" + "\n";
				luch->get(pos1)->setHP(luch->get(pos1)->getHP() - luch->get(pos2)-> getAtaqueMagico());
				break;
			case 1:
				dato+= luch->get(pos2)->getNombre() + " Eligio Ataque Fisico" + "\n";
				luch->get(pos1)->setHP(luch->get(pos1)->getHP() - luch->get(pos2)-> getAtaqueFisico());
				break;
			case 2:
				dato+= luch->get(pos2)->getNombre() + " Eligio Defender" + "\n";
				luch->get(pos2)->setHP(luch->get(pos2)->getHP() + (luch->get(pos2)->getHP() * 0.45));
				break;
			case 3:
				dato+= luch->get(pos2)->getNombre() + " Eligio Habilidad Especial" + "\n";
				int randomHab = rand()%4;
				do{
					switch(randomHab){
						case 0:
							
							for (int i = 0; i <=luch->get(pos2)->size()-1; ++i){
								if (luch->get(pos2)->getClasesAprendidas(i) == "Guerrero"){
									Luchador* LuTem = new Guerrero();
									luch->get(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 1:
							
							for (int i = 0; i <=luch->get(pos2)->size()-1; ++i){
								if (luch->get(pos2)->getClasesAprendidas(i) == "Mago"){
									Luchador* LuTem = new Mago();
									luch->get(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 2:
							
							for (int i = 0; i <=luch->get(pos2)->size()-1; ++i){
								if (luch->get(pos2)->getClasesAprendidas(i) == "Alquimista"){
									Luchador* LuTem = new Alquimista();
									luch->get(pos2)->setHP(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos2)->getHP()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
						case 3:
							
							Veri = turno;
							isDrag = 1;
							for (int i = 0; i <=luch->get(pos2)->size()-1; ++i){
								if (luch->get(pos2)->getClasesAprendidas(i) == "DragonBorn"){
									Luchador* LuTem = new DragonBorn();
									luch->get(pos2)->setAtaqueFisico(LuTem->HabilidadEspecial(UsoHabil, luch->get(pos2)->getAtaqueFisico()));
									UsoHabil = 1;
								}else{
									break;
								}
							}
							break;
				}//switch()2
				UsoHabilCent = 1;
				} while (UsoHabilCent != 1);
				UsoHabilCent = 0;
		}//switch()
		if (isDrag == 1 && turno == Veri+2){
			luch->get(pos2)->setAtaqueFisico(luch->get(pos2)->getAtaqueFisico() / 2);
		}

		if (luch->get(pos1)->getHP() <= 0){
			dato+= luch->get(pos1)->getNombre() + " Ha Perdido" + "\n";
			dato+= luch->get(pos2)->getNombre() + " Ha Ganado" + "\n";
			luch->get(pos1)->setHP(0);
			luch->get(pos2)->setHP(HPLu2);
			
		}else if (luch->get(pos2)->getHP() <= 0){
			dato+= luch->get(pos2)->getNombre() + " Ha Perdido" + "\n";
			dato+= luch->get(pos1)->getNombre() + " Ha Ganado" + "\n";
			luch->get(pos2)->setHP(0);
			luch->get(pos1)->setHP(HPLu1);
		}
		turno++;
		Turno++;
		Save<<dato;
		dato="";
	} while ((luch->get(pos1)->getHP() != 0) && (luch->get(pos2)->getHP() != 0));
	if (luch->get(pos1)->getHP() == 0){
		cout<<luch->get(pos1)->getNombre()<<" Ha Perdido!"<<endl
			<<endl;
		cout<<luch->get(pos2)->getNombre()<<" Ha Ganado!"<<endl
			<<endl;
		cout<<luch->get(pos2)->getNombre()<<endl
			<<"Exp Actual:       | "<<luch->get(pos2)->getExp()<<endl
			<<"Exp Ganada:       | "<<35*2<<endl
			<<endl;
		luch->get(pos2)->addExp(luch->get(pos2)->getExp() + luch->get(pos2)->HabilidadPasiva(UsoHabil, 35));
		cout<<"Total Exp:        | "<<luch->get(pos2)->getExp()<<endl;
		VerificarExp(luch, pos2);
		luch->remove(pos1);
	}else if (luch->get(pos2)->getHP() == 0){
		cout<<luch->get(pos2)->getNombre()<<" Ha Perdido!"<<endl
			<<endl;
		cout<<luch->get(pos1)->getNombre()<<" Ha Ganado!"<<endl
			<<endl;
		cout<<luch->get(pos1)->getNombre()<<endl
			<<"Exp Actual:        | "<<luch->get(pos1)->getExp()<<endl
			<<"Exp Ganada:        | "<<35*2<<endl
			<<endl;
		luch->get(pos1)->addExp(luch->get(pos1)->getExp() + luch->get(pos1)->HabilidadPasiva(UsoHabil, 35));
		cout<<"Total Exp:         | "<<luch->get(pos1)->getExp()<<endl;
		VerificarExp(luch, pos1);
		luch->remove(pos2);
	}
	cout<<"Fin de la Simulación"<<endl;
	dato+="Lucha a Terminado";
	dato+="\n";
	dato+= "-------------------------------------";
	Save<<dato;
}//Simulacion()

void VerificarExp(ADTList* luch, int pos){
	if (luch->get(pos)->getExp() >= 100){
		cout<<luch->get(pos)->getNombre()<<"Ha subido de Clase ha Guerrero"<<endl;
		Luchador* lu = new Guerrero(luch->get(pos)->getNombre());
		luch->remove(pos);
		luch->insert(lu, pos);
		luch->get(pos)->addClasesAprendidas("Aprendiz");
		luch->get(pos)->addClasesAprendidas("Guerrero");
	}else if (luch->get(pos)->getExp() >= 200){
		cout<<luch->get(pos)->getNombre()<<"Ha subido de Clase ha Mago"<<endl;
		Luchador* lu = new Mago(luch->get(pos)->getNombre());
		luch->remove(pos);
		luch->insert(lu, pos);
		luch->get(pos)->addClasesAprendidas("Aprendiz");
		luch->get(pos)->addClasesAprendidas("Guerrero");
		luch->get(pos)->addClasesAprendidas("Mago");
	}else if (luch->get(pos)->getExp() >= 300){
		cout<<luch->get(pos)->getNombre()<<"Ha subido de Clase ha Alquimista"<<endl;
		Luchador* lu = new Alquimista(luch->get(pos)->getNombre());
		luch->remove(pos);
		luch->insert(lu, pos);
		luch->get(pos)->addClasesAprendidas("Aprendiz");
		luch->get(pos)->addClasesAprendidas("Guerrero");
		luch->get(pos)->addClasesAprendidas("Mago");
		luch->get(pos)->addClasesAprendidas("Alquimista");
	}else if (luch->get(pos)->getExp() >= 400){
		cout<<luch->get(pos)->getNombre()<<"Ha subido de Clase ha DragonBorn"<<endl;
		Luchador* lu = new Alquimista(luch->get(pos)->getNombre());
		luch->remove(pos);
		luch->insert(lu, pos);
		luch->get(pos)->addClasesAprendidas("Aprendiz");
		luch->get(pos)->addClasesAprendidas("Guerrero");
		luch->get(pos)->addClasesAprendidas("Mago");
		luch->get(pos)->addClasesAprendidas("Alquimista");
		luch->get(pos)->addClasesAprendidas("DragonBorn");
	}

}//VerificarExp