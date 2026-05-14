// hacer un programa que copie los elementos de una matriz 2*2 a otra y luego lo muestre en pantalla

#include<iostream>
using namespace std;

int main(){
	int matriz [2][2] = {{1,2}, {3,4}} ;
	int matriz_copia[2][2] ;
	
	// Copiando la matriz a otra
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz_copia[i][j] = matriz[i][j];
		}
	}
	//Mostrando la matriz copiada
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << matriz_copia[i][j] << " ";
		}
		cout << "\n";
	}
	
	system("pause");
	return 0;
}
