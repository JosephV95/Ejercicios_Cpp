
#include<iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

// PROTOTIPO de funciones
void insertarCola( Nodo *&, Nodo *&, int);
void suprimirCola( Nodo *&, Nodo *& , int &);
bool cola_vacia(Nodo *);

int main(){
	// Creo los puntero frente y fin apuntado a NULL
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int dato;
	
	cout<< "Inserte un numero: ";
	cin>> dato;
	insertarCola(frente, fin, dato);
	
	cout<< "Inserte un numero: ";
	cin>> dato;
	insertarCola(frente, fin, dato);
	
	/// -------------- ELIMINANDO DATOS DE LA COLA
	cout<<"\nEliminando elementos de la cola: "<<endl;
	while( frente != NULL){
		suprimirCola(frente, fin, dato);
			
		if (frente != NULL){
			cout<< dato<<", ";
		} else {
			cout<< dato<<"." <<endl;
		}
	}
		
	system("pause");
	return 0;
}

void insertarCola(Nodo * &frente, Nodo * &fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;  // SIEMPRE apuntara a un NULL, ya que esta llegando y no hay nadie luego de el (AL INICIO);
	
	if( cola_vacia(frente )){ // SOLO SI la cola esta VACIA el FRENTE apuntara al nuevo_nodo
		frente = nuevo_nodo;
	} else {
		fin->siguiente = nuevo_nodo; // SI la cola NO ESTA VACIA, el puntero del FIN DEBE APUNTAR a este nuevo_nodo creado
	}
	
	fin = nuevo_nodo; // SIN IMPORTAR si la cola esta vacia o no, SIEMPRE el fin debera apuntar al nuevo_nodo
	cout << "\tElemento "<< n <<" insertado a cola correctamente."<<endl;
}

void suprimirCola(Nodo * &frente, Nodo * &fin, int &n){
	Nodo *aux = frente;
	n = frente->dato;
	
	if (frente == fin){  // Si SON IGUALES singnifica que solo hay 1 elemento en la cola, entonces ahora deberan apuntar a NULL
		frente = NULL;
		fin = NULL;
	} else {  // si no eran iguales, significa que habia mas elementos en la cola
		frente = frente->siguiente;  // ahora el puntero *frente apuntara al elemento que le seguia (y ese sera el nuevo inicio de la cola)
	}
	
	delete aux; // eliminamos lo que hasta ahora era el primer elemento de la cola
}

// funcion para determinar si cola esta vacia o no
bool cola_vacia( Nodo *frente){
	return (frente == NULL)? true : false;  // Usando un operador ternario
//	if( frente == NULL){
//		return true;
//	} else { 
//		return false;
//	}
}
