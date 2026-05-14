// Escribir en C++ la espresion  a/b + 1

#include<iostream>

using namespace std;
 
int main(){
	
	float a, b, resultado = 0;
	
	cout << "Ingrese valor de a: ";
	cin >> a;
	cout << "Ingrese valor de b: ";
	cin >> b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2); // Con esto el metodo puedo controlo la cantidad de decimales a mostrar en el cout 
	
	cout << "\nEl resultado es de: " << resultado << endl;
	
	return 0;
}
