/* Hacer un programa que utilice COLAS y contenga el siguiente menu:
	1- Insertar un caracter a una cola,
	2- Mostrar(eliminar) todos los elementos de una cola.
	3. SALIR.
*/
#include<iostream>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;
};

// PROTOTIPO DE FUNCIONES
void menuSeleccion();
void insertarCola( Nodo *&, Nodo *&, char);
void suprimirCola( Nodo *&, Nodo *&, char &);
bool cola_vacia (Nodo *);

int main(){
	menuSeleccion();
	
	system("pause");
	return 0;
}

// DECLARACION DE LAS FUNCIONES
void menuSeleccion(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	char dato;
	int opcion;
	
	do{
		cout<< "\t.:MENU:."<<endl
			<<"1. Insertar caracter a la cola."<<endl
			<<"2. Mostrar (eliminar) todos los elementos de la cola."<<endl
			<<"3. SALIR"<<endl;
		cout<<"OPCION: ";
		cin>>opcion;  cout<<"\n";
		
		switch(opcion){
			case 1: 
				cout<<"Ingrese caracter:";  cin>>dato;
				insertarCola(frente, fin, dato);
				break;
			case 2: 
				if( cola_vacia(frente)){
					cout<< "La cola ESTA VACIA\n";  system("pause"); break;
				}
				cout<<"Mostrando elementos de la cola: "<<endl;
				
				while( frente != NULL){
					suprimirCola(frente, fin, dato);
					if( frente != NULL){
						cout<< dato <<", ";  // si no es el ultimo elemento, agregara una coma para separarlos
					} else {
						cout<< dato <<"." <<endl; // si es el ultimo agrega el punto final.
					}
				}
				system("pause"); // pausa la pantalla para poder ver todos los elementos
				break;
			case 3: 
				break;
			default:
				cout<< "Opcion invalida."; break;
		}
		system("cls"); // LIMPIA LA PANTALLA
	} while (opcion != 3);
	
}

void insertarCola(Nodo * &frente, Nodo * &fin, char caracter){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = caracter;
	nuevo_nodo->siguiente = NULL; // EL NUEVO elemento que se agrega SIEMPRE TENDRA ->siguiente = NULL
	
	if( cola_vacia(frente) ){
		frente = nuevo_nodo; // si la cola estaba VACIA, ahora el frente apuntara a este nuevo_nodo
	} else {
		fin->siguiente = nuevo_nodo; // si NO ESTABA VACIA, el valor del actual puntero *fin->siguiente  DEBERA APUNTAR al nuevo_nodo creado
	}
	
	fin = nuevo_nodo; // SIN IMPORTAR si la cola estaba vacia o no, el fin sera este nuevo_nodo creado.
	
	cout<< "Caracter '"<<caracter << "' agregado correctamente a la COLA."<<endl;
};

void suprimirCola(Nodo * &frente, Nodo * &fin, char &caracter){
	Nodo *aux = frente;
	caracter = frente->dato;
	
	if (frente == fin){  // Si SON IGUALES significa que solo hay 1 elemento en la cola, entonces ahora deberan apuntar a NULL
		frente = NULL;
		fin = NULL;
	} else {  // si no eran iguales, significa que habia mas elementos en la cola
		frente = frente->siguiente;  // ahora el puntero *frente apuntara al elemento que le seguia (y ese sera el nuevo inicio de la cola)
	}
	
	delete aux; // eliminamos lo que hasta ahora era el primer elemento de la cola
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL) ? true : false;
}

