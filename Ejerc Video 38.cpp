// Hacer un programa que llene una matriz de 3*3 y luego la muestre con su TRASPUESTA

#include<iostream>
using namespace std;

int main(){
	int matriz[3][3];
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << "Ingrese numero para la fila "<< i <<" posicion "<< j <<": ";
			cin >> matriz[i][j];
		}
	}
	//Mostrando la matriz origen
	cout<< "\nMatriz original:"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	//Mostrando la matriz TRASPUESTA
	cout<< "\nMatriz Traspuesta:"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << matriz[j][i] << " "; // AL INTERCAMBIAR LOS INDICES SE MUESTRA LA MATRIZ TRASPUESTA
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
