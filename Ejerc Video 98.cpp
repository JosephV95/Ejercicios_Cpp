// HAcer un porgrama para agregar todos los num enteros qeu quiera el uasuario a una PILA

#include<iostream>
#include<stdlib.h> // Para el new y el delete

using namespace std;

struct Nodo {
	int dato;
	Nodo *siguiente;
};

void agregarPila( Nodo *&, int); // Prototipo
void sacarPila( Nodo *&, int &);

int main(){
	Nodo *pila = NULL; // creo la pila con un null
	int dato;
	char respuesta;
	
	// Pedir la cantidad de datos que quiera el usuario
	do{
		cout << "Ingrese un numero: ";
		cin >> dato;
		agregarPila(pila, dato);
		
		cout<< "\nAgregar otro elemento a la PILA? (s/n): ";
		cin >> respuesta;
		
	} while ( (respuesta== 'S') || (respuesta== 's') );  // Se repetira mientras el usuario presione 's'
	
	
	// --------- Sacando elementos de la PILA
	cout << "\nSacando elementos de la PILA"<<endl;
	while( pila != NULL){  // mientras no sea el final de la PILA
		sacarPila(pila, dato);
		
		// solo es para mostrar los datos que se van sacando de la PILA
		if(pila != NULL){
			cout << dato << " , ";
		} else {
			cout << dato << "."<<endl;
		}
	}
	
	system("pause");
	return 0;
}

void agregarPila( Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo(); // 1. Creas un nodo vacío en memoria.
	nuevo_nodo->dato = n;          // 2. Le metes el número.
	nuevo_nodo->siguiente = pila;  // 3. El "siguiente" de este nuevo nodo apunta a lo que antes era la cima.
	pila = nuevo_nodo;             // 4. La cima de la pila ahora es el nuevo nodo.
	
	cout << "\tElemento " << n << " se agrego correctamente a PILA."<<endl;
}

void sacarPila( Nodo *&pila, int &n){
	Nodo *aux = pila;      // 1. Creas un puntero auxiliar que apunte al nodo de arriba (para no perderlo).
	n = aux->dato;         // 2. Guardas el número en 'n' (que modifica a 'dato' en el main).
	pila = aux->siguiente; // 3. La cima de la pila ahora pasa a ser el nodo que estaba abajo.
	delete aux;            // 4. Borras físicamente de la memoria el nodo viejo. 
};
