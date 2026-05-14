// Escribir programa que lea numeros enteros hasta que se introduzca un valor entre (20-30) o se introduzca un 0.
//el programa debe entregar la suma de los valores mayores a 0 introducidos

#include<iostream>
using namespace std;

int main(){
	int numero, sumatoria = 0;
	
	do{
		cout << "Ingrese un numero: ";
		cin >> numero;
		
		if(numero > 0){
			sumatoria += numero;
		}
	} while ( (numero<20) || (numero>30) && (numero != 0)) ;
	
	cout << "La sumatoria es: "<< sumatoria<<endl;
	
	system("pause");
	return 0;
}
