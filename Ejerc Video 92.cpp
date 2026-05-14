// suma de 2 matrices dinamicas

#include<iostream>
#include<stdlib.h> // para el new y el delete
using namespace std;

// Prototipo de funciones
void pedirDatos();
void sumarMatrices(int **, int **, int, int); // se enviara (puntero de puntero, puntero de puntero, numFilas, numColumnas)
void mostrarMatrizResultado(int **, int, int);

int **puntero_matriz_1, **puntero_matriz_2, numFilas, numColumnas; // Variables globales

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz_1, puntero_matriz_2, numFilas, numColumnas);
	mostrarMatrizResultado(puntero_matriz_1, numFilas, numColumnas);
	
	//Liberando memoria utilizada en la matriz 1
	for(int i=0; i<numFilas; i++){
		delete[] puntero_matriz_1[i];
	}
	delete[] puntero_matriz_1;
	//Liberando memoria utilizada en la matriz 2
	for(int i=0; i<numFilas; i++){
		delete[] puntero_matriz_2[i];
	}
	delete[] puntero_matriz_2;
	
	
	system("pause");
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese su nro Filas: ";
	cin>> numFilas;
	cout<<"Ingrese su nro Columnas: ";
	cin>> numColumnas;
	
	//Reservar memoria para la PRIMERA MATRIZ DINAMICA
	puntero_matriz_1 =	new int*[numFilas]; // Reservando memoria para las filas
	for (int i=0; i<numFilas; i++){
		puntero_matriz_1[i] = new int[numColumnas]; // Reservando memoria para las columnas
	}
		
	cout<<"\nIngresando elementos de la 1RA Matriz: \n";
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){
			cout<<"Ingrese numero ["<<i<<"]["<<j<<"]: ";
			cin >> *(*(puntero_matriz_1+i)+j) ; // es lo mismo que puntero_matriz[i][j]
		}
	}
	
	//Reservar memoria para la SEGUNDA MATRIZ DINAMICA
	puntero_matriz_2 =	new int*[numFilas]; // Reservando memoria para las filas
	for (int i=0; i<numFilas; i++){
		puntero_matriz_2[i] = new int[numColumnas]; // Reservando memoria para las columnas
	}
	
	cout<<"\nIngresando elementos de la 2DA Matriz: \n";
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){
			cout<<"Ingrese numero ["<<i<<"]["<<j<<"]: ";
			cin >> *(*(puntero_matriz_2+i)+j) ; // es lo mismo que puntero_matriz[i][j]
		}
	}
}

void sumarMatrices( int **puntero_matriz_1, int **puntero_matriz_2, int numFilas, int numColumnas){
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){
			// seria como igual a ==>  puntero_matriz_1[i][j] += puntero_matriz_2[i][j]
			*(*(puntero_matriz_1+i)+j) += *(*(puntero_matriz_2+i)+j); // sumo elem de matriz1 y matriz2 y lo guardo en la posicion de matriz1
		}
	}
}

void mostrarMatrizResultado(int **puntero_matriz_1, int numFilas, int numColumnas){
	cout<<"\nMostrando Resultado de la suma de matrices: \n";
	for(int i=0; i<numFilas; i++){
		for(int j=0; j<numColumnas; j++){ 
			cout<< *(*(puntero_matriz_1 +i) +j) << " "; // igual a puntero_matriz_1[i][j]
		}
		cout<<endl;
	}
};
