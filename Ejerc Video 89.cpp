/* Pedir al usuario N numeros, almacenarlos en un arreglo dinamico, luego ordenarlos de forma ascendente
y mostrarlo en pantalla. Urilizar cualquier metodo de ordenamiento */

#include<iostream>
#include<stdlib.h> // Para el funcionamiento de new y delete
using namespace std;

// Declaramos los prototipos de la funciones
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

int nElementos, *elementos; // VARIABLES GLOBALES: un int y un PUNTERO

int main(){
	pedirDatos();
	ordenarArreglo(elementos, nElementos); //Se le pasa el puntero y el int de cantidad
	mostrarArreglo(elementos, nElementos);
	
	delete[] elementos; // LIBERAMOS LA MEMORIA UTILIZADA PARA EL ARREGLO DINAMICO
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese cantidad de elementos del Arreglo: ";
	cin>> nElementos;
	
	elementos = new int[nElementos]; // AQUI SE CREA EL ARREGLO DINAMICO
	
	for(int i=0; i<nElementos; i++){
		cout<<"Ingrese un numero ["<<i<<"]: ";
		cin>> *(elementos+i); // Es lo mismo que poner elemento[i]
	}
}

void ordenarArreglo(int *elemento, int nElementos){
	int aux;
	// Se ordenara con metodo burbuja
	for(int i=0; i<nElementos; i++){
		for(int j=0; j<nElementos-1 ; j++){
			if( *(elemento+j) > *(elemento+j+1)){ // es lo mismo que elemento[j] > elemento[j+1]
				aux = *(elemento+j)	;
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}
void mostrarArreglo(int *elemento, int nElementos){
	cout<<"\nMostrando Arreglo ordenado: ";
	for(int i=0; i<nElementos; i++){
		cout<< *(elemento+i) <<" "; // elemento[i]
	}
}
