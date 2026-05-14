// Hacer un programa que pida enteros para agregar a un arreglo y determine el mayor elemento

#include <iostream>
using namespace std;

int main(){
	int arr_numeros[100], cantidad, num_mayor=0;  // Como no se la cantidad de elementos que tendra el arreglo pongo arr[100]
	
	cout << "Ingrese la cantidad de elementos que tendra el arreglo: ";
	cin >> cantidad;
	
	for(int i=0; i<cantidad; i++){
		cout<< i+1 <<" - Ingrese el numero: ";
		cin>> arr_numeros[i];
		
		// APROVECHO EL FOR PARA YA IR DETERMINANDO EL NUMERO MAYOR
		if( arr_numeros[i] > num_mayor ){
			num_mayor = arr_numeros[i];
		}
	}
	
	cout << "\nEl elemento mayor del arreglo es: " << num_mayor << endl;
	
	system("pause");
	return 0;
}


