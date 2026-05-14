/* MATRIZ DINAMICA
Ejemplo: rellenar una matriz de nxm y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int]
					*puntero_fila -> [int] [int]
					
1 2 3		1 -> 2 3
4 5 6		4 -> 5 6
7 8 9		7 -> 8 9

*/
#include<iostream>
#include<stdlib.h> // PARA EL NEW Y EL DELETE
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, numFilas, numColumnas;  // puntero que sera UNA MATRIZ DINAMICA

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz, numFilas, numColumnas);
	
	// Liberando memoria que utilizamos para la matriz
	for(int i=0; i<numFilas; i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese su nro Filas: ";
	cin>> numFilas;
	cout<<"Ingrese su nro Columnas: ";
	cin>> numColumnas;
	
	//Reservar memoria para la MATRIZ DINAMICA
	puntero_matriz = new int*[numFilas];  // reservando memoria para las filas
	for(int i=0; i<numFilas; i++){
		puntero_matriz[i] = new int[numColumnas]; // reservando memotia para las columnas
	}
	
	cout<<"\nIngresando elementos a la Matriz: \n";
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){
			cout<<"Ingrese numero ["<<i<<"]["<<j<<"]: ";
			cin >> *(*(puntero_matriz+i)+j) ; // es lo mismo que puntero_matriz[i][j]
		}
	}	
}

void mostrarMatriz(int **puntero_matriz, int numFilas, int numColumnas){
	cout<< "\nImprimiendo matriz:\n";
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){
			cout<< *(*(puntero_matriz+i)+j) <<" "; // puntero_matriz[i][j]
		}
		cout<<"\n";
	}
}
