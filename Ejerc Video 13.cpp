// Hacer un programa que pida 2 numeros y determine cual es el mayor

#include<iostream>
using namespace std;

int main(){
	int num1, num2;
	
	cout << "Ingrese 2 numeros: ";
	cin >> num1 >> num2;  // Asi puedo pedir los 2 numeros seguidos
	
	if (num1 == num2){
		cout << "Los numeros son iguales";
	} else if (num1 > num2){
		cout << "El mayor es num1: " << num1 ;
	} else {
		cout << "El mayor es num2: " << num2;
	}
	
	return 0;
}
