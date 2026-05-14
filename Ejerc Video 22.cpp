// Hacer un programa que pida un numero entero del 1 al 10 y muestre su tabla de multiplicar

#include<iostream>
#include<stdlib.h>
using namespace std;

int main (){
	int numero ;
	
	do{
		cout << "Ingrese un numero entre 1-10: ";
		cin >> numero;
	} while ( (numero < 1) || (numero > 10) ) ;
	
	for(int i=1; i<=15; i++){
		cout << numero << " * " << i << " = " << numero*i <<endl;
	}
	
	system("pause");
	return 0;
}
