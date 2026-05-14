// Hacer un programa que rellene una matriz pidiendo al asuario el nro de filas y columnas. Luego mostrar la matriz por pantalla

#include<iostream>
using namespace std;

int main(){
	int matriz[100] [100], filas, columnas;
	
	cout<< "Ingrese la cantidad de Filas: ";
	cin >>  filas;
	cout<< "Ingrese la cantidad de Columnas: ";
	cin >> columnas;
	
	// Almacenando los elementos en la matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout << "Digite numero en fila ["<< i <<"] posicion "<< j+1 << ": ";
			cin >> matriz[i][j];
		}
	}
	// Mostrando la matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout << matriz[i][j] <<" ";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
