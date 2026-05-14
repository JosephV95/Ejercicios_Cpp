// Hacer un programa que calcule el valor de 1*2*3*4*...n (factorial) hasta un numero ingresado
// ejemplo 5  ==>  1*2*3*4*5
#include<iostream>
using namespace std;

int main(){
	int numero, total = 1; // como el factorial es multiplicacion SIEMPRE INICIAR EN 1
	
	cout << "Ingrese un numero para saber su factorial: ";
	cin >> numero;
	
	for(int i=1; i<=numero; i++){
		total *= i;
	}
	
	cout << "El Factorial total de "<<numero<<" es de: "<< total<<endl;
	
	
	system("pause");
	return 0;
}
