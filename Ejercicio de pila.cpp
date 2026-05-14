
#include<iostream>
using namespace std;

struct Nodo {
	char dato;
	Nodo *siguiente;
};

// PROTOTIPO DE LAS FUNCIONES
void agregarPila( Nodo *&, char);
void quitarPila( Nodo *&, char &);
void quitarTodoDePila(Nodo *&, char &);
void mostrarPila( Nodo *);

void seleccionPila(int &);

int main(){
	Nodo *pila_1 = NULL;
	Nodo *pila_2 = NULL;
	
	char dato;
	int opcion;
	int pila_elegida;
	
	do{
		cout<< "Seleccione una opcion: "<<endl
			<< "1. Agregar caracter a una PILA"<<endl
			<< "2. Mostrar elementos de una PILA"<<endl
			<< "3. Quitar elementos de una PILA"<< endl
			<< "4. Comparar elementos duplicados entre 2 PILAS"<<endl
			<< "5. Buscar Mayor y Menor elementos de una PILA"<<endl
			<< "6. SALIR"<< endl;
		
		cout<< "OPCION: ";
		//cin>> opcion; cout<<endl;
		if (!(cin >> opcion)) { // Si la lectura falla (el usuario metió una letra)
		    cin.clear(); // Limpia el estado de error de cin
		    cin.ignore(10000, '\n'); // Ignora hasta 10000 caracteres o hasta el siguiente salto de línea
		    opcion = 0; // Asignamos un valor que dispare el "default" del switch
		}
		
		system("cls"); // LIMPIA LA PANTALLA
		
		switch (opcion){
			case 1:
				cout <<"Eliga una PILA (presione 1 o 2): "; cin >> pila_elegida;
				if (pila_elegida == 1){
					cout << "Ingese caracter: "; cin >> dato;
					agregarPila(pila_1, dato);
					break;
				} else if(pila_elegida == 2){
					cout << "Ingese caracter: "; cin >> dato;
					agregarPila(pila_2, dato);
					break;
				} else {
					cout << "Opcion invalida."<<endl;
					break;
				}
			case 2:
				cout <<"Eliga una PILA (presione 1 o 2): "; cin >> pila_elegida;
				if (pila_elegida == 1){
					mostrarPila(pila_1);
					break;
				} else if(pila_elegida == 2){
					mostrarPila(pila_2);
					break;
				} else {
					cout << "Opcion invalida."<<endl;
					break;
				}
			case 3:
				cout<< "Eliga una PILA (presione 1 o 2): ";	cin>> pila_elegida;
				if(pila_elegida == 1){
					quitarTodoDePila(pila_1, dato);
					break;
				} else if (pila_elegida == 2){
					quitarTodoDePila(pila_2, dato);
					break;
				} else{
					cout << "Opcion invalida."<<endl;
					break;
				}
				break;
			case 4:
				break;
			case 6:
				break;
			default:
				cout<< "Opcion NO VALIDA"<<endl;
				break;	
		} 
		system("pause");
		system("cls"); // LIMPIA LA PANTALLA
	} while (opcion != 6);
	
	
//	system("pause");
	return 0;
}


void seleccionPila(int &pila_elegida){
	cout <<"Seleccione una PILA (presione 1 o 2): ";
	cin >> pila_elegida;
}

void agregarPila(Nodo * &pila, char letra){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = letra;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout << "\tSe agrego '"<<letra<<"' correctamente a la PILA"<<endl;
}

void quitarPila(Nodo * &pila, char &letra){
	Nodo *aux = pila;
	letra = aux->dato;
	pila = aux->siguiente;
	delete aux;
}

void quitarTodoDePila(Nodo * &pila, char &letra){
	if(pila == NULL){
		cout<< "La PILA esta vacia."<<endl;
		return;
	}
	
	cout << "Quitando elementos de la PILA: "<<endl;
	while (pila != NULL){
		quitarPila(pila, letra);
		cout<< "\tElemento '"<< letra <<"' quitado correctamente."<<endl;
	}
}

void mostrarPila( Nodo * pila){
	Nodo *copia_nodo = pila;
	
	if(copia_nodo == NULL){
		cout << "La PILA esta vacia"<<endl;
		return;
	}
	
	cout << "Mostrando elementos de la PILA: "<<endl;
	while ( copia_nodo != NULL){
		if( copia_nodo->siguiente != NULL){
			cout<< copia_nodo->dato << ", ";
		} else {
			cout<< copia_nodo->dato << "." <<endl;
		}
		
		copia_nodo = copia_nodo->siguiente;
	}
	// delete copia_nodo; // No es necesario ya 
}

