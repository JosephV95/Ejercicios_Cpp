// Ejercicio con la sentencia switch

#include<iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "Ingrese un numero entre 1-3: ";
	cin >> numero;
	
	switch(numero){
		case 1:
			cout << "El numero es 1";
			break;
		case 2:
			cout << "El numero es 2";
			break;
		case 3:
			cout << "el numero es 3";
			break;
		default:
			cout << "El numero es distinto al rango 1-3";
			break;
	}
	
	return 0;
}
