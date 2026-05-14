// Hacer un programa que reciba un numero entero y determine si es par o impar

#include<iostream>
using namespace std;

int main (){
	int numero;
	
	cout << "Ingrese un numero: ";
	cin >> numero;
	
	if (numero == 0){
		cout << "El numero es 0";
	} else if (numero%2 == 0){
		cout << "El numero es PAR";
	} else {
		cout << "El numero es IMPAR";
	}
	
	return 0;
}
