// Hacer un programa que determine si una matriz es SIMETRICA, y lo sera si es CUADRADA e IGUAL a su TRASPUESTA

#include <iostream>
using namespace std;

int main(){
	int matriz [100][100], filas, columnas;
	char bandera = 'V';
	
	cout << "Ingrese cantidad de FILAS: ";
	cin >> filas;
	cout << "Ingrese cantidad de COLUMNAS: ";
	cin >> columnas;
	
	// Almacenando los elementos en la matriz
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			cout << "Digite numero en fila ["<< i <<"] posicion "<< j << ": ";
			cin >> matriz[i][j];
		}
	}
	
	// Verificando si es CUADRARA Y TRASPUESTA
	if (filas != columnas){
		cout << "La matriz NO ES cuadrada"<<endl;
	} else {
		for(int i=0; i<filas; i++){
			for(int j=0; j<columnas; j++){
				// IF para verificar un elemento y su posicion traspuesta
				if( matriz[i][j] != matriz[j][i] ){
					bandera = 'F';
				}
			}
		}
		
		if( bandera == 'V'){
			cout << "La matriz es CUADRADA Y TRASPUESTA"<< endl;	
		} else {
			cout << "La matriz NO ES traspuesta"<<endl;
		}
	}
	
	system("pause");
	return 0;
}
